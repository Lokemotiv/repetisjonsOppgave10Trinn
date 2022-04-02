#include <iostream>

int main(){
    long double svar, tall1, tall2;
    std::cout << "Tall 1: ";
    std::cin >> tall1;
    std::cout << "tall 2: ";
    std::cin >> tall2;
    svar = tall1 + tall2;
    std::cout << svar;

    std::cout << "Trykk enter for " << char(134) << " avslute programet";
    std::cin.get();
    std::cin.get();
}