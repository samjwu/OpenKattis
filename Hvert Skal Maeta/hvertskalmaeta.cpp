#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, std::string> site = {
        {"Reykjavik", "Reykjavik"},
        {"Kopavogur", "Reykjavik"},
        {"Hafnarfjordur", "Reykjavik"},
        {"Reykjanesbaer", "Reykjavik"},
        {"Akureyri", "Akureyri"},
        {"Gardabaer", "Reykjavik"},
        {"Mosfellsbaer", "Reykjavik"},
        {"Arborg", "Reykjavik"},
        {"Akranes", "Reykjavik"},
        {"Fjardabyggd", "Akureyri"},
        {"Mulathing", "Akureyri"},
        {"Seltjarnarnes", "Reykjavik"},
    };

    std::string municipality;

    std::cin >> municipality;

    std::cout << site[municipality];
}
