#pragma once


using namespace std;

#ifndef PETAL
#define PETAL

#include <iostream>
#include <vector>

template <typename T , size_t S>
class petal {
private:
    vector<T> mainobjects;
    int layers[S][S];
public:
    T petal_return();
    void petal_reg(const T& object);
    void petal_algorithm();
};

#endif
