#include <vector>
#include <iostream>

template <typename T>
std::vector<T> mergeSort(std::vector<T> &array)
{
    if (array.size() == 1)
        return array;

    auto splitPoint = array.begin() + array.size() / 2;
    auto begin = array.begin();
    auto end = array.end();
    typename std::vector<T> x(begin, splitPoint), y(splitPoint++, end);

    mergeSort(x);
    mergeSort(y);

    array = {};
    auto xp = 0, yp = 0;
    while (x.size() != xp && y.size() != yp) {
        if (x[xp] < y[yp]) {
            array.push_back(x[xp]);
            xp++;
        }
        else {
            array.push_back(y[yp]);
            yp++;
        }
    }

    for (auto i = xp; i < x.size(); i++) 
        array.push_back(x[i]);

    for (auto i = yp; i < y.size(); i++) 
        array.push_back(y[i]);

    return array;
}