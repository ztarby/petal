# CMakeList.txt: proyecto de CMake para Petal, incluya el origen y defina
# la lógica específica del proyecto aquí.
#
cmake_minimum_required (VERSION 3.8)

# Agregue un origen al ejecutable de este proyecto.
add_executable (Petal "Petal.cpp" "Petal.h" "petal_/petal.cpp"  "petal_/Test(trash_files)/extras.h" "petal_/Test(trash_files)/extras.cpp" "petal_/Test(trash_files)/pt.hpp" "petal_/Test(trash_files)/pt.cpp")

# TODO: Agregue pruebas y destinos de instalación si es necesario.
