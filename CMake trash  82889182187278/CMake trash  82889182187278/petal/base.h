#pragma once
#include <iostream>

namespace petal {
	constexpr int h = 8;
	constexpr int cantidad = 10;
	constexpr int cantidad_multp = cantidad * cantidad;


	class ia {
	public:
		std::string cpufrases[cantidad];
		int rando(int max, int min);
		char textos[h];
		void cpuleer(char eltexto[]);
		void databaseT(std::string text);
		std::string cpureturn();
		void registro(std::string textodeluser);
		void cpuregistro(std::string textodeluser);
		//enum class ende {equisvar,equisvar2,equisvar4};

	private:
		std::string base_de_cada_f[cantidad_multp];
		int tamaño = sizeof textos;
		int tamaño_cantidad;
		int ultimo[cantidad];
		int ultimom = 0;
		int cantidadX = cantidad * cantidad;

		int numerocorrecto = 0;
		int posiblidad[cantidad];
		string ultimapalabrareg = "null";

		bool ishave = false;


		struct precision {
			int fila = 0;
			int colum = 0;

			int posibidad[cantidad][cantidad];
			string regusertexts[cantidad][cantidad];
		};
		precision regstr;
		int cuantas_veses_dijo[cantidad];

	};

}


template <typename x>
x hg(const x& h ) {
	return h + 2;
}
void forsave(std::string atext);
/*
auto ehd(const x) {
	return x;
}
*/
