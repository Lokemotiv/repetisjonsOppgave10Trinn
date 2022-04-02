#include "cppFungtionsForPrograms.cpp"
#include "cppBubbleSort.cpp"
#include "cppMergeSort.cpp"

int main(){
    std::vector<std::string> x;
    std::vector<long double> l1, l2;
    std::string s;
    std::cout << "Put in en liste med tall seperert med komma f.eks 1,2,3,4: ";
    std::cin >> s;

    x = split(s, ",");
    l1 = stoldVector(x);
    l2 = stoldVector(x);

    auto start = std::chrono::steady_clock::now();
    bubbleSort(l1);
    auto end = std::chrono::steady_clock::now();
    auto bubbleSortT = end - start;

    std::cout << "bubble sort Sorterte listen: ";
    for(auto i : l1)
        std::cout << i << ",";

    std::cout << "\nDet tok: " << std::chrono::duration <double, std::milli> (bubbleSortT).count() << "ms";

    start = std::chrono::steady_clock::now();
    mergeSort(l2);
    end = std::chrono::steady_clock::now();
    auto mergeSortT = end - start;

    std::cout << "\nmerge sort Sorterte listen: ";
    for(auto i : l2)
        std::cout << i << ",";

    std::cout << "\nDet tok: " << std::chrono::duration <double, std::milli> (mergeSortT).count() << "ms";

    std::cout << "Trykk enter for " << char(134) << " avslute programet";
    std::cin.get();
    std::cin.get();
}