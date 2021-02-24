#include "petal.h"

using namespace std;

template<typename T, size_t S>
inline T petal<T, S>::petal_return()
{
	return T();
}

template<typename T, size_t S>
void petal<T,S>::petal_reg(const T& object)
{
	mainobjects.push_back(object);
}

template<typename T, size_t S>
void petal<T,S>::petal_algorithm()
{
}

template petal<int, 100>;