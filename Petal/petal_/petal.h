#pragma once

#ifndef PETAL
#define PETAL

using namespace std;

#include <iostream>
#include <vector>

template <typename T , size_t S>
class petal {
private:
    vector<T> mainobjects;
    T layers[S][S];
    int layer[S];

    
public:
    T petal_return();
    void petal_reg(const T& object);
    void petal_algorithm(const T& object);
};

#endif
