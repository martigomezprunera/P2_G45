#pragma once
#include <vector>
#include <string>
#include <iostream>​

class Jugador
{
private:

	int score;
	std::vector<std::string>inventario;
	std::vector<std::string>listajugador;			//Lista de elemento del jugador

public:

	Jugador();										//Constructor
	~Jugador();										//Destructor

	void setScore(int);								
	int getScore();			
	void add(int);
	void addBasics();								
	void Delete(int);							
	std::vector<std::string> getInv();				//Metodo para consultar el inventario del jugador
	void modListaJugador(std::string);				//Metodo para modificar la lista de elementos descubiertos del jugador
	std::vector<std::string> getListaJugador();				
	std::string getStringElement(int);				//Consultar elemento con su numero
	void seeElementsInv();							//METODO PARA PRINTAR POR PANTALLA TODOS LOS ELEMENTOS DEL JUGADOR
};