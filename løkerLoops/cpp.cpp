#include <iostream>

int main(){
    for(auto i = 0; i < 3; i++){
        std::cout << i << "\n";
    }

    auto i = 0;
    while(i < 3){
        std::cout << i << "\n";
        i++;
    }

    i = 0;
    do{
        std::cout << i << "\n";
        i++;
    }
    while (i < 3);

    i = 0;
    goto loop;
loop:
    std::cout << i << "\n";
    i++;
    if(i < 3){
        goto loop;
    }
}