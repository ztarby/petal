#include "extras.h"


template<typename T, size_t S>
T arraydouble<T, S>::back(int one, int two)
{
	return matr[one][two];
}

template<typename T, size_t S>
void arraydouble<T, S>::persopush(const T& obj, bool one, bool two, const int sone, const int stwo)
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

template<typename T, size_t S>
T arraydouble<T, S>::last(const int one, bool invert)
{
	int i;
	while (true) {
		if (invert = true) {
			if (matr[i][one] == fulling) {
				break;
			}
			i++;
		}
		else {
			if (matr[one][i] == fulling) {
				break;
			}
			i++;
		}
	}
	
	return matr[one][i];
}

template <typename T, size_t S>
T arraydouble<T, S>::full(const T& obj) {
	for (int i; i < S; i++) {
		forsave("registing the object1: " + i);
		matr[i][0] = obj;
	}
	for (int i; i < S; i++) {
		forsave("registing the object2: " + i);
		matr[0][i] = obj;
	}
	fulling = obj;
}



template<typename T, size_t S>
void arraydouble<T, S>::forsave(string text)
{
     string ssss;
	cin >> ssss;
	cout << text;
}