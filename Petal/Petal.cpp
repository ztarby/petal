// Petal.cpp: define el punto de entrada de la aplicación.
//

#include "Petal.h"

using namespace std;

int main()
{
	petal<int, 5> p;
	cout << "Main console, example app" << endl;
	cout << p.petal_return();

	
/*
	int x = 100;
	int* a;
	a = &x;
	
	cout << &x;
	delete a;
*/
	return 0;
}
