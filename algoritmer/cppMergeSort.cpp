#include <vector>

template <typename T>
std::vector<T> mergeSort(std::vector<T> &array) {
    if (array.size() == 1)
        return array;

    auto splitPoint = array.begin() + array.size() / 2;
    auto begin = array.begin();
    auto end = array.end();

    typename std::vector<T> x(begin, splitPoint);
    mergeSort(x);

    typename std::vector<T> y(splitPoint++, end);
    mergeSort(y);

    array = {};
    auto xp = 0, yp = 0;
    while (x.size() != xp && y.size() != yp) {
        if (x[0] <= y[0]) {
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