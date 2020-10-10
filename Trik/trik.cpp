#include <iostream>
#include <sstream>
#include <string>

int main() {
	std::string input;
	std::cin >> input;

    int pos = 1;
    
    for (int i=0; i<input.length(); i++) {
        switch (input[i]) {
            case 'A':
                switch(pos) {
                    case 1:
                        pos = 2;
                        continue;
                    case 2:
                        pos = 1;
                        continue;
                    case 3:
                        continue;
                }
            case 'B':
                switch(pos) {
                    case 1:
                        continue;
                    case 2:
                        pos = 3;
                        continue;
                    case 3:
                        pos = 2;
                        continue;
                }
            case 'C':
                switch(pos) {
                    case 1:
                        pos = 3;
                        continue;
                    case 2:
                        continue;
                    case 3:
                        pos = 1;
                        continue;
                }
        }
    }

	std::cout << pos << std::endl;

	return 0;
}