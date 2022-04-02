#pragma once
#include <fstream>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include <type_traits>
#include <typeinfo>
#include <memory>
#include <string>
#include <cstdlib>
#include <chrono>

template <typename T>
std::string toS(T x)
{
    std::ostringstream streamObj3;
    streamObj3 << std::fixed;
    streamObj3 << std::setprecision(1);
    streamObj3 << x;
    return streamObj3.str();
}

template <typename T>
std::vector<long double> stoldVector(std::vector<T> x)
{
    std::vector<long double> y = {};
    for (T i : x)
        y.push_back(stold(i));
    return y;
}

std::vector<std::string> split(std::string s, std::string x)
{
    std::vector<std::string> splitarr = {};
    size_t pos;

    //findes all the colomn names in the file
    while ((pos = s.find(x)) != std::string::npos)
    {
        splitarr.push_back(s.substr(0, pos));
        s.erase(0, pos + x.length());
    }
    splitarr.push_back(s);
    return splitarr;
}