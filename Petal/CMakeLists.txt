# CMakeList.txt: proyecto de CMake para Petal, incluya el origen y defina
# la lógica específica del proyecto aquí.
#
cmake_minimum_required (VERSION 3.8)

# Agregue un origen al ejecutable de este proyecto.
add_executable (Petal "Petal.cpp" "Petal.h" "petal_/petal.cpp" "petal_/petalconfig.h")

# TODO: Agregue pruebas y destinos de instalación si es necesario.
