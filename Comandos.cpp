#include "Comandos.h"

Comandos::Comandos(DataM & data, Jugador & jug):dataA(data), jugA(jug)
{

}

Comandos::~Comandos()
{
}

void Comandos::info(int element)
{
	std::string element_wiki(jugA.getStringElement(element));
	std::string url_wiki("https://en.wikipedia.org/wiki/" + element_wiki);

	char *url_arreglado = new char[url_wiki.length()];
	strcpy_s(url_arreglado, strlen(url_arreglado), url_wiki.c_str());

	ShellExecuteA(nullptr, "open", url_arreglado, nullptr, nullptr, SW_SHOWNORMAL);
}

void Comandos::help()
{
	std::cout << "Lista de comandos : " << std::endl;
	std::cout << "ADD + NUM_ELEMENTO :  Añade un elemento del inventario especificado por el numero" << std::endl;
	std::cout << "ADD BASICS : Añade todos los elementos principales al inventario" << std::endl;
	std::cout << "DELETE + NUM_ELEMENTO : Elimina un elemento del inventario especificado por el numero" << std::endl;
	std::cout << "INFO + NUM_ELEMENTO : Accede a Wikipedia para información del elemento especificado por numero" << std::endl;
	std::cout << "HELP : Muestra los comandos del juego" << std::endl;
	std::cout << "SORT : Ordena todos los elementos del inventario" << std::endl;
	std::cout << "CLEAN : Elimina todos los elementos del invetario" << std::endl;

}
