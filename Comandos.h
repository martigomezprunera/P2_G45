#pragma once
#include "DataM.h"
#include "Jugador.h"
#include <iostream>
#include <windows.h>
#include <string>

class Comandos
{
public:
	Comandos(DataM &data, Jugador &jug);
	~Comandos();

	void info(int element);							//METOTO PARA INFORMACION DE UN ELEMENTO
	void help();									//METODO PARA AYUDA(COMANDOS)
	void sort();									//METODO PARA ORDENAR LOS ELEMENTOS DEL INVENTARIO
	void clean();									//METODO PARA ELIMINAR TODOS LOS ELEMENTOS DEL INVENTARIO

private:
	DataM &dataA;
	Jugador &jugA;
};

