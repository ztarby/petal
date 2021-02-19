#pragma once

#ifndef PETAL
#define PETAL
#include <iostream>
#include <vector>

using namespace std;
template <typename T , size_t S>
class petal {
private:
   T matrix[S][S];
    vector<T> mainobjects;
public:
    T petal_return();
    void petal_reg(const T& object);
    void petal_algorithm();
};

#endif








