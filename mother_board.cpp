#define _CRT_SECURE_NO_WARNINGS
#include "mother_board.h"
#include <iostream>
using namespace std;

mother_board::mother_board(const char* _name, const char* _production, double _price)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
	price = _price;
}

void mother_board::Set_name(const char* _name)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

void mother_board::Set_production(const char* _production)
{
	if (production != nullptr)
	{
		delete[] production;
	}
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
}

void mother_board::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void mother_board::show()const
{
	cout << "\t---Mother board characteristics---";
	cout << "\nName: " << name;
	cout << "\nProduction: " << production;
	cout << "\nPrice = " << price;
}

mother_board::~mother_board()
{
	delete[] name;
	delete[] production;
}