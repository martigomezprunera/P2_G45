#pragma once
#include "DataM.h"
#include <fstream>
#include <iostream> 
#include <string>
#include <fstream>
#include <unordered_map>


class DataM
{
private:

public:
	std::string lineas[395];
	std::unordered_map<std::string, std::pair<std::string, std::string>> mymap;
	const int NUMLINES = 395;
	DataM();
	~DataM();
};