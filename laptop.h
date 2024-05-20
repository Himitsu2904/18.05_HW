#pragma once
#include "HDD.h"
#include "RAM.h"
#include "VGA.h"
#include "CPU.h"
#include "mother_board.h"

class laptop
{
	HDD hdd;
	RAM ram;
	VGA vga;
	CPU cpu;
	mother_board mb;
	double price;
	char* color;
public:
	laptop();
	laptop(HDD &_hdd, RAM &_ram, VGA &_vga, CPU &_cpu, mother_board &_mb, const char* _color);
	char* Get_color()const
	{
		return color;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_color(const char* _color);
	void components_input();
	void show()const;
	~laptop();
};