#include <iostream>

int main(){
    //for loop
    //for(lager variabel; vilkår; forandrer variabel){}
    for(auto i = 0; i < 3; i++){
        std::cout << i << "\n";
    }

    //while loop
    //while(vilkår){}
    auto i = 0;
    while(i < 3){
        std::cout << i << "\n";
        i++;
    }

    //do while loop
    //do{}
    //while(vilkår)
    i = 0;
    do{
        std::cout << i << "\n";
        i++;
    }
    while (i < 3);

    //goto loop;
    i = 0;
    goto loop;
loop:
    std::cout << i << "\n";
    i++;
    if(i < 3){
        goto loop;
    }
}