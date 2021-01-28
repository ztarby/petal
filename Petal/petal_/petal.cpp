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



template<typename T>
T arraydouble<T>::back(int one, int two)
{
	return matr[one][two];
}

template<typename T>
void arraydouble<T>::persopush(const T& obj, bool one, bool two , const int sone, const int stwo)
{

	if (one == true) {
		sone = countt;
	}
	
	if (two == true) {
		stwo = count2
	}
	matr[sone][stwo] = obj;

	if (one == true) {
		countt++;
	}

	if (two == true) {
		count2++;
	}
}

template<typename T>
T arraydouble<T>::last(const int one)
{
	int i;
	while (true) {
		if (matr[one][i] == "") {
			break;
		}
		i++;
	}

	return matr[one][i];
}