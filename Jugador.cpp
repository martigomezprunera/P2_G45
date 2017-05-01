#include "Jugador.h"

Jugador::Jugador() :
	score(0),
	inventario({ "Air", "Earth", "Fire", "Water" })
	
{
}

Jugador::~Jugador()
{
}

void Jugador::addBasics()
{
	inventario.push_back("Air");
	inventario.push_back("Earth");
	inventario.push_back("Fire");
	inventario.push_back("Water");

}

void Jugador::add(int num)
{
	inventario.push_back(this->getStringElement(num));
}

void Jugador::Delete(int i)
{
	inventario.erase(inventario.begin() + i);
}

void Jugador::setScore(int n)
{
	score = n;
}

int Jugador::getScore()
{
	return score;
}

std::vector<std::string> Jugador::getInv()
{
	return inventario;
}

void Jugador::modListaJugador(std::string elemento)
{
	listajugador.push_back(elemento);
}

std::vector<std::string> Jugador::getListaJugador()
{
	return listajugador;
}

std::string Jugador::getStringElement(int num)
{
	return inventario[num];
}