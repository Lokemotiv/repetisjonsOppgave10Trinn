#include <iostream>
#include <unordered_map>

int checkSystem(std::string x){
    std::unordered_map<char, int> tallSystemprefix = {
        {'b', 2},
        {'x', 16}
    };
    if(x[0] != '0') return 10;
    if(tallSystemprefix.count(x[1]) == 0) return 8;
    
    return tallSystemprefix[x[1]];
}

int main(){
    std::string tall = "123";
    std::cout << checkSystem(tall);
}