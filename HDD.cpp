#define _CRT_SECURE_NO_WARNINGS
#include "HDD.h"
#include <iostream>
using namespace std;

HDD::HDD(const char* _name, const char* _production, const char* _memory, int _Ghz, double _price)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
	memory = new char[strlen(_memory) + 1];
	strcpy(memory, _memory);
	Ghz = _Ghz;
	price = _price;
}

void HDD::Set_name(const char* _name)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

void HDD::Set_production(const char* _production)
{
	if (production != nullptr)
	{
		delete[] production;
	}
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
}

void HDD::Set_memory(const char* _memory)
{
	if (memory != nullptr)
	{
		delete[] memory;
	}
	memory = new char[strlen(_memory) + 1];
	strcpy(memory, _memory);
}

void HDD::Set_Ghz(int _Ghz)
{
	if (_Ghz > 0)
	{
		Ghz = _Ghz;
	}
}

void HDD::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void HDD::show()const
{
	cout << "\t---HDD characteristics---";
	cout << "\nName: " << name;
	cout << "\nProduction: " << production;
	cout << "\nMemory volume = " << memory;
	cout << "\nGhz = " << Ghz;
	cout << "\nPrice = " << price;
}

HDD::~HDD()
{
	delete[] name;
	delete[] production;
	delete[] memory;
}
