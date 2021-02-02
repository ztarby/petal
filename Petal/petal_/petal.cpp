#include "petal.h"
//#include "petalconfig.h"


using namespace std;

template<typename T>
inline T petal<T>::petal_return()
{
	return T();
}

template<typename T>
void petal<T>::petal_reg(const T& object)
{
	mainobjects.push_back(object);
}

template<typename T>
void petal<T>::petal_algorithm()
{
}

// extras ***********************************************

