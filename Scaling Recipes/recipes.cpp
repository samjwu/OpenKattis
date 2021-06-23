#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

struct ingredient {
    std::string name;
    double weight;
    double percent;
};

int main() {
    int t, r;
    double p, d;
    std::cin >> t;

    int recipeNum = 0;

    std::string food;
    double weight, percent;
    std::vector<ingredient> recipe;

    for (int i=0; i<t; i++) {
        std::cin >> r >> p >> d;
        double scalingFactor = d / p;

        recipeNum++;
        std::cout << "Recipe # " << recipeNum << std::endl;

        double mainIngredientWeight;

        for (int j=0; j<r; j++) {
            std::cin >> food >> weight >> percent;
            recipe.push_back(ingredient());
            recipe[j].name = food;
            recipe[j].weight = weight;
            recipe[j].percent = percent;

            if (percent == 100) {
                mainIngredientWeight = scalingFactor * weight;
            }
        }

        for (int j=0; j<r; j++) {
            std::printf("%s %.1f\n", recipe[j].name.c_str(), recipe[j].percent/100 * mainIngredientWeight);
        }

        for (int k=0; k<40; k++) {
            std::cout << "-";
        }
        std::cout << std::endl;
    }    
}