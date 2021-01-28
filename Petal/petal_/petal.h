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


template <typename T>
class arraydouble {
private:
   T matr[INT16_MAX][INT16_MAX];
   
   int countt , count2;
public: 
    void persopush(const T& obj , bool one, bool two , const int sone , const int stwo);
    T back(int one, int two);
    T last(const int one);
};


#endif






