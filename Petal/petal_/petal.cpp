#include "petal.h"
#include "petalconfig.h"

template<typename T>
inline T petal_print(const T& object)
{
	return T();
}

template<typename ...args, typename T>
T petal_print2(const args & ...objects)
{
	return T();
}