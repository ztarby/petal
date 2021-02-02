#pragma once
#include <iostream>
#include <string>

#ifndef ARRAYDOUBLE
#define ARRAYDOUBLE

template <typename T, size_t S>
class arraydouble {
private:
    T matr[S][S];
    void forsave(string text);
    int countt = 0; int count2 = 0;
    T fulling;
public:
    void persopush(const T& obj, bool one, bool two, const int sone, const int stwo);
    T back(int one, int two);
    T last(const int one, bool invert);
    T full(const T& obj);
};

#endif