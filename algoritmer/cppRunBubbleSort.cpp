#include <vector>
#include <iostream>

template <typename T>
std::vector<T> bubbleSort(std::vector<T> &array)
{
    T temp;
    for (auto i = 0; i < array.size(); i++)
        for (auto j = i + 1; j < array.size(); j++)
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
    return array;
}

int main(){
    std::vector<auto> x;
    std::string s;
    std::cout << "Put in en liste med tall seperert med komma f.eks 1,2,3,4"
    std::cin << s;
    x = split(s, ",");
    x = bubbleSort(stold(x))
    std::cout << "Sorterte listen: "
    for(auto i : x)
        std::cout << i << ",";
    std::cout << "Det tok: " << << "ms";
}