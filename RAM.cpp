#define _CRT_SECURE_NO_WARNINGS
#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM(const char* _name, const char* _production, int _GB, double _price)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
	GB = _GB;
	price = _price;
}

void RAM::Set_name(const char* _name)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

void RAM::Set_production(const char* _production)
{
	if (production != nullptr)
	{
		delete[] production;
	}
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
}

void RAM::Set_GB(int _GB)
{
	if (_GB > 0)
	{
		GB = _GB;
	}
}

void RAM::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void RAM::show()const
{
	cout << "\t---RAM characteristics---";
	cout << "\nName: " << name;
	cout << "\nProduction: " << production;
	cout << "\nMemory volume = " << GB << " GB";
	cout << "\nPrice = " << price;
}

RAM::~RAM()
{
	delete[] name;
	delete[] production;
}
