#pragma once
#include <iostream>
#include <vector>
//#include "petalconfig.h"



using namespace std;

#ifndef PETAL
#define PETAL

template <typename T>
class petal {
private:
    vector<T> mainobjects;
public:
    T petal_return();
    void petal_reg(const T& object);
    void petal_algorithm();
};

#endif








