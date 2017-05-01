#include <fstream>
#include "DataM.h"
#include <iostream> 
#include <string>
#include <fstream>
#include <unordered_map>
#include "Comandos.h"
#include "Jugador.h"
#include "DataM.h"

enum class COMANDOS {
	ADD,
	DEL,
	INFO,
	SORT,
	CLEAN,
	HELP,
	MAX
};

int main()

{

	std::string url_elements("elements.dat");
	std::unordered_map<std::string, COMANDOS> comandos;

	comandos["add"] = COMANDOS::ADD;
	comandos["delete"] = COMANDOS::DEL;
	comandos["info"] = COMANDOS::INFO;
	comandos["clean"] = COMANDOS::CLEAN;
	comandos["help"] = COMANDOS::HELP;
	comandos["sort"] = COMANDOS::SORT;

	std::cout << "-------------------" << std::endl;
	std::cout << "FULLENTI ALCCHEMIST" << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "- Enter two numbers of your elements list to combine them." << std::endl;
	std::cout << "- Enter the word a 'add' and the number of an element to add a new instance of that element." << std::endl;
	std::cout << "- Enter two 'add basics'  to add new instances of the 4 basics elements." << std::endl;
	std::cout << "- Enter the word 'delete' and the number of an element to erase it from your list." << std::endl;
	std::cout << "- Enter the word 'info' and the number of an element to get information about it in the explorer." << std::endl;
	std::cout << "- Enter the word 'sort' to sort by alphabetical order the elements in the list." << std::endl;
	std::cout << "- Enter the word 'clean' to delete all the instances of all the repeated elements" << std::endl;
	std::cout << "- Enter the word 'help' to show this tutorial." << std::endl;
	system("pause");
	system("cls");

	//CREAMOS LAS CLASES QUE NECESITAMOS
	DataM data(url_elements);
	Jugador jug;
	Comandos com(data, jug);

	std::cout << "Your current score is: " << jug.getScore() << std::endl;
	std::cout << "Your have this elements: " << jug.getScore() << std::endl;



}