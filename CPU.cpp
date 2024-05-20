#define _CRT_SECURE_NO_WARNINGS
#include "CPU.h"
#include <iostream>
using namespace std;

CPU::CPU(const char* _name, const char* _production, int _Ghz, double _price)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
	Ghz = _Ghz;
	price = _price;
}

void CPU::Set_name(const char* _name)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

void CPU::Set_production(const char* _production)
{
	if (production != nullptr)
	{
		delete[] production;
	}
	production = new char[strlen(_production) + 1];
	strcpy(production, _production);
}

void CPU::Set_Ghz(int _Ghz)
{
	if (_Ghz > 0)
	{
		Ghz = _Ghz;
	}
}

void CPU::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void CPU::show()const
{
	cout << "\t---CPU characteristics---";
	cout << "\nName: " << name;
	cout << "\nProduction: " << production;
	cout << "\nSpeeed = " << Ghz << " Ghz";
	cout << "\nPrice = " << price;
}

CPU::~CPU()
{
	delete[] name;
	delete[] production;
}
