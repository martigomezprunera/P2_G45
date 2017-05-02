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

private:
	DataM &dataA;
	Jugador &jugA;
};

