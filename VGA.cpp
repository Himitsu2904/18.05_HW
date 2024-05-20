#define _CRT_SECURE_NO_WARNINGS
#include "VGA.h"
#include <iostream>
using namespace std;

VGA::VGA(const char* _name, const char* _production, int _MB, double _price)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
	MB = _MB;
	price = _price;
}

void VGA::Set_name(const char* _name)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

void VGA::Set_production(const char* _production)
{
	if (production != nullptr)
	{
		delete[] production;
	}
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
}

void VGA::Set_MB(int _MB)
{
	if (_MB > 0)
	{
		MB = _MB;
	}
}

void VGA::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void VGA::show()const
{
	cout << "\t---VGA characteristics---";
	cout << "\nName: " << name;
	cout << "\nProduction: " << production;
	cout << "\nOperational system volume = " << MB << " MB";
	cout << "\nPrice = " << price;
}

VGA::~VGA()
{
	delete[] name;
	delete[] production;
}
