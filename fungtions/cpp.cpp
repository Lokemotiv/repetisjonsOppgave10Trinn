#include <iostream>

double add(double x, double y){
    return x + y;
}

//funksjon med bivirkning
void printHello(){
    std::cout << "hello";
}

int main(){
    double x = add(4, 3);
    double y = add(3.5, 4.6);
    printHello();
    printHello();
    printHello();
}

