
#include "DataM.h"
#include <fstream>
#include <iostream> 
#include <string>
#include <fstream>
#include <unordered_map>



DataM::DataM()
{
	size_t pos;
	size_t pos1;
	int igual;
	int suma;
	int counter = 0;
	std::string palabras[3];

	std::ifstream archivo("elements.dat");
	std::string aux;

	while (std::getline(archivo, aux))
	{

		igual = aux.find("=");
		suma = aux.find("+");

		palabras[0] = aux.substr(0, igual);
		palabras[1] = aux.substr(igual + 2, suma - 2);
		palabras[2] = aux.substr(suma + 2);
		mymap[palabras[0]] = { palabras[1],palabras[2] };



	}
}
DataM::~DataM()
{
}