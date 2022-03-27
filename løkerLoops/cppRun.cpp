#include <iostream>

int main(){
    int x;
    std::cout << "hvor mange ganeger skal loopen kj" << char(155) << "re: ";
    std::cin >> x;
    
    for(auto i = 0; i < x; i++){
        std::cout << i << ", ";
    }
    std::cout << "\n";

    auto i = 0;
    while(i < x){
        std::cout << i << ", ";
        i++;
    }
    std::cout << "\n";

    i = 0;
    do{
        std::cout << i << ", ";
        i++;
    }
    while (i < x);
    std::cout << "\n";

    i = 0;
    goto loop;
loop:
    std::cout << i << ", ";
    i++;
    if(i < x){
        goto loop;
    }

    std::cout << "\nTrykk en knapp for " << char(134) << " avslute programet";
    std::cin.get();
    std::cin.get();
}