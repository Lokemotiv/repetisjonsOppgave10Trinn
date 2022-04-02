#include <iostream>

int main(){
    int x, y;
    std::cout << "Tall 1: ";
    std::cin >> x;
    std::cout << "Tall 2: ";
    std::cin >> y;

    if(x == y){
        std::cout << x << " er lik " << y;
    }
    else if(x > y){
        std::cout << x << " er større enn " << y;
    }
    else{
        std::cout << x << " er mindre enn " << y;
    }

    std::cout << "Trykk enter for " << char(134) << " avslute programet";
    std::cin.get();
    std::cin.get();
}