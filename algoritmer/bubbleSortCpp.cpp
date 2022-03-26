#include <vector>

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