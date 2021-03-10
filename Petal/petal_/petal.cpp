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
void petal<T,S>::petal_algorithm(const T& object)
{
	std::string xe;
	//register number and object in the layer
	int z = 0;
	for (auto x : mainobjects) {
		if (object == x) {
			layers[z][layer[z]] = object;
			layer[z]++;
           //break;
		}
		//anti infinite for and a debug text
		std::cin >> xe;
		std::cout << layers[z][counter2_2[z]] << std::endl;

		z++;
		
	}
}

template petal<int, 100>;
template petal<string, 100>;