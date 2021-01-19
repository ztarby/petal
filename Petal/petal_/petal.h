#pragma once
#include <string>
#include <vector>



using namespace std;

template <typename T>
T petal_print(const T& object);

template <typename... args , typename T>
T petal_print2(const args&... objects);