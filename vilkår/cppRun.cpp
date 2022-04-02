#include <iostream>

std::string trueFalse(bool x){
    return (x) ? "true" : "false";
}

int main(){
    bool a = 1 == 2;
    bool b = 1 != 2;
    bool c = 1 >= 2;
    bool d = 1 > 2;
    bool e = 1 <= 2;
    bool f = 1 < 2;
    std::cout << "a: " << trueFalse(a) << "\n"
            << "b: " << trueFalse(b) << "\n"
            << "c: " << trueFalse(c) << "\n"
            << "d: " << trueFalse(d) << "\n"
            << "e: " << trueFalse(e) << "\n"
            << "f: " << trueFalse(f) << "\n";

    std::cout << "Trykk enter for " << char(134) << " avslute programet";
    std::cin.get();
}