#define _CRT_SECURE_NO_WARNINGS
#include "laptop.h"
#include <iostream>
using namespace std;

laptop::laptop()
{
	hdd.Set_name("---");
	hdd.Set_production("---");
	hdd.Set_memory("---");
	hdd.Set_Ghz(0);
	hdd.Set_price(0);

	ram.Set_name("---");
	ram.Set_production("---");
	ram.Set_GB(0);
	ram.Set_price(0);

	vga.Set_name("---");
	vga.Set_production("---");
	vga.Set_MB(0);
	vga.Set_price(0);

	cpu.Set_name("---");
	cpu.Set_production("---");
	cpu.Set_Ghz(0);
	cpu.Set_price(0);

	mb.Set_name("---");
	mb.Set_production("---");
	mb.Set_price(0);

	color = new char[4];
	strcpy(color, "---");
	price = 0;
}

laptop::laptop(HDD& _hdd, RAM& _ram, VGA& _vga, CPU& _cpu, mother_board& _mb, const char* _color)
{
	hdd.Set_name(_hdd.Get_name());
	hdd.Set_production(_hdd.Get_production());
	hdd.Set_memory(_hdd.Get_memory());
	hdd.Set_Ghz(_hdd.Get_Ghz());
	hdd.Set_price(_hdd.Get_price());

	ram.Set_name(_ram.Get_name());
	ram.Set_production(_ram.Get_production());
	ram.Set_GB(_ram.Get_GB());
	ram.Set_price(_ram.Get_price());

	vga.Set_name(_vga.Get_name());
	vga.Set_production(_vga.Get_production());
	vga.Set_MB(_vga.Get_MB());
	vga.Set_price(_vga.Get_price());

	cpu.Set_name(_cpu.Get_name());
	cpu.Set_production(_cpu.Get_production());
	cpu.Set_Ghz(_cpu.Get_Ghz());
	cpu.Set_price(_cpu.Get_price());
	
	mb.Set_name(_mb.Get_name());
	mb.Set_production(_mb.Get_production());
	mb.Set_price(_mb.Get_price());

	color = new char[strlen(_color) + 1];
	strcpy(color, _color);
	price = 0;
	price += hdd.Get_price() + ram.Get_price() + vga.Get_price() + cpu.Get_price() + mb.Get_price() + 1000;
}

void laptop::Set_color(const char* _color)
{
	if (color != nullptr)
	{
		delete[] color;
	}
	color = new char[strlen(_color) + 1];
	strcpy(color, _color);
}

void laptop::components_input()
{
	char buff[100]; int a; double b;
	cout << "\tEnter HDD characterictics:";
	cout << "\nName: "; gets_s(buff, 100);
	hdd.Set_name(buff);
	cout << "\nProduction: "; gets_s(buff, 100);
	hdd.Set_production(buff);
	cout << "\nMemory volume = "; gets_s(buff, 100);
	hdd.Set_memory(buff);
	cout << "\nSpeed = "; cin >> a; hdd.Set_Ghz(a);
	cout << "\nPrice =  "; cin >> b; hdd.Set_price(b);
	
	cout << "\n\tEnter RAM characterictics:";
	cout << "\nName: "; gets_s(buff, 100);
	ram.Set_name(buff);
	cout << "\nProduction: "; gets_s(buff, 100);
	ram.Set_production(buff);
	cout << "\nMemory volume (GB) = "; cin >> a; ram.Set_GB(a);
	cout << "\nPrice =  "; cin >> b; ram.Set_price(b);

	cout << "\n\tEnter VGA characterictics:";
	cout << "\nName: "; gets_s(buff, 100);
	vga.Set_name(buff);
	cout << "\nProduction: "; gets_s(buff, 100);
	vga.Set_production(buff);
	cout << "\nOpeational system volume (MB) = "; cin >> a; vga.Set_MB(a);
	cout << "\nPrice =  "; cin >> b; vga.Set_price(b);

	cout << "\n\tEnter CPU characterictics:";
	cout << "\nName: "; gets_s(buff, 100);
	cpu.Set_name(buff);
	cout << "\nProduction: "; gets_s(buff, 100);
	cpu.Set_production(buff);
	cout << "\nSpeed (Ghz) = "; cin >> a; cpu.Set_Ghz(a);
	cout << "\nPrice =  "; cin >> b; cpu.Set_price(b);

	cout << "\n\tEnter mother board characterictics:";
	cout << "\nName: "; gets_s(buff, 100);
	mb.Set_name(buff);
	cout << "\nProduction: "; gets_s(buff, 100);
	mb.Set_production(buff);
	cout << "\nPrice =  "; cin >> b; mb.Set_price(b);

	cout << "\n\nEnter the computer case color: "; gets_s(buff, 100);
	strcpy(color,buff);
}

void laptop::show()const
{
	cout << "\t---Laptop components---" << endl;
	hdd.show();
	cout << endl;
	ram.show();
	cout << endl;
	vga.show();
	cout << endl;
	cpu.show();
	cout << endl;
	mb.show();
	cout << "\n\nThe computer case color: " << color;
}

laptop::~laptop()
{
	delete[] color;
}