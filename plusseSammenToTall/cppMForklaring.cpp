#include <iostream>

int main(){
    //lager 3 variabler
    long double svar, tall1, tall2;
    //printer ut "Tall 1: "
    std::cout << "Tall 1: ";
    //puter det som blir skreve in i variabelen tall1
    std::cin >> tall1;
    //printer ut "Tall 2: "
    std::cout << "tall 2: ";
    //puter det som blir skreve in i variabelen tall2
    std::cin >> tall2;
    //plusser samen tall1 og tall2 og lagrer det i svar
    svar = tall1 + tall2;
    //printer ut svar
    std::cout << svar;
}