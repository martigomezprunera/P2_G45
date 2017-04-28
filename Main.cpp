#include <fstream>
#include "DataM.h"
#include <iostream> 
#include <string>
#include <fstream>
#include <unordered_map>

int main()
{
	DataM mapa;
	DataM();

	for (auto it = mapa.mymap.begin(); it != mapa.mymap.end(); ++it)
	{
		std::cout << it->first << '=' << it->second.first << '+' << it->second.second << std::endl;
	}



}
