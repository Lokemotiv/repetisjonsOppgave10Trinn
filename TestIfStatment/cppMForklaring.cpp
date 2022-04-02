#include <iostream>

int main(){
    //sjekker om 1 er lik 2
    if(1 == 2){
        std::cout << "1 er lik 2";
    }
    //sjekker om 1 er støre enn 2 vis 1 ikke er lik 2
    else if(1 > 2){
        std::cout << "1 er større enn 2";
    }
    //kjører vis 1 er mindre enn 2 siden da er if og else if statmentet falskt
    else{
        std::cout << "1 er mindre enn 2";
    }
}