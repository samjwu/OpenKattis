#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using ull = unsigned long long int;

ull calculate(std::vector<int>& numbers) {
	ull ans = 0;
    ull exp = 0;

    for (int i=0; i<numbers.size(); i++) {
        ans += numbers[i] * std::pow(60, exp);
        exp++;
    }
    
	return ans;
}

int main() {
	int n;
	std::string num;
	std::vector<int> numbers;

    std::cin >> n;

    for (int i=0; i<n; i++) {
		std::cin >> num;

		while (!num.empty()) {
			int commaIndex = num.rfind(",");

			if (commaIndex == std::string::npos) {
				numbers.push_back(std::stoi(num));
				num = "";
			} else if (commaIndex == num.length() - 1) {
				numbers.push_back(0);
				num = num.substr(0, commaIndex);
			} else {
				numbers.push_back(std::stoi(num.substr(commaIndex + 1)));
				num = num.substr(0, commaIndex);
			}
		}

		std::cout << calculate(numbers) << std::endl;

		numbers.clear();
	}
}