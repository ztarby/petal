#include "base.h"
#include <iostream>
#include <random>

using namespace std;
using namespace petal;


void forsave(string atext) {
	string equis;
	cin >> equis;
	cout << atext;
}

void ia::databaseT(string text) {
	int i = 0;
	for (auto &x : cpufrases) {
		cpufrases[i] = text;
		i++;
	}
}
int ia::rando(int max , int min) {
	random_device rd;
	mt19937 ge(rd());
	uniform_int_distribution<> gen(min, max);
	
	return gen(rd) ;
}

void ia::cpuleer(char eltexto[]) {
	
	cpufrases[ultimom] = eltexto;
    int textodeluser = sizeof eltexto;
	int i = 0;
	while (eltexto[0] != NULL) {
		i++;

		
		forsave("o");
	}
	i = textodeluser;
	
	for (int i = 0; i < textodeluser; i++) {
		
		int k;
		cin >> k;
	
		textos[i] = eltexto[i];
		//ultimo[ultimom]++;
	}
	//textos[ultimo[ultimom]] = '/';
	//typedef	array<int, 9> yy;


	ultimom++;
}
string ia::cpureturn() {
	int x = 0;
	while (cpufrases[x] != "") {
		x++;
	}
	
	
	
	for (int i = 0; i < cantidad; i++) {
		int random = rando(1000, 0);
		posiblidad[i] = random;

		
	}
	int reg = 0;
	
	for (auto x : posiblidad) {
		if (x > reg) {
			reg = x;
		}
	}

	for (int i = 0; i < cantidad; i++) {
		if (posiblidad[i] == reg) {
			numerocorrecto = i;
			break;
		}
	}

	if (ishave = true) {
		
	}

	return cpufrases[numerocorrecto];
	ultimapalabrareg = cpufrases[numerocorrecto];
     //return "null";
}
void ia::registro(string textodeluser) {
	bool noterminar = true;
	int buscar = 0;
	while (noterminar) {
		if (buscar > cantidad) {
			noterminar = false;
		}
		if (textodeluser == cpufrases[buscar]) {
			if (cuantas_veses_dijo[buscar] == NULL) {
				cuantas_veses_dijo[buscar] = 1;
			}
			else {
				cuantas_veses_dijo[buscar]++;
			}
			noterminar = false;
		}
		buscar++;
	}
}
void ia::cpuregistro(string textodeluser) {
	
    regstr.fila = numerocorrecto;
	posiblidad[numerocorrecto]++;


	regstr.regusertexts[regstr.fila][regstr.colum] = textodeluser;

	

	regstr.colum++;
	if (regstr.colum > cantidad) {
		regstr.colum = 0;
		//regstr.fila++;
	}
	ishave = true;
	
}

