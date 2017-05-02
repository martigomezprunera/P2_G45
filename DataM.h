#pragma once
#include "DataM.h"
#include <fstream>
#include <iostream> 
#include <string>
#include <fstream>
#include <unordered_map>

template<>
struct  std::hash<std::pair<std::string, std::string>>
{
	size_t operator()(const std::pair<std::string, std::string> &p)const {
		return ((hash<std::string>()(p.first)
			^ (hash<std::string>()(p.second) << 1)) >> 1);
	}
};

class DataM
{
private:

public:
	std::string lineas[395];
	std::unordered_map<std::pair<std::string, std::string>, std::string> mymap;
	const int NUMLINES = 395;
	DataM(std::string URL);
	~DataM();
};
