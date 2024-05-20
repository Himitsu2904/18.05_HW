#include <iostream>
#include "laptop.h"
using namespace std;

int main()
{
	HDD hdd("DATADOMAIN", "Future Tech", "1 TB", 540, 20000);
	RAM ram("DDR3", "Exeleram", 4, 540);
	VGA vga("VGA-A", "ElecProd", 15, 100);
	CPU cpu("Core i5", "Intel", 3, 10400);
	mother_board mb("ASUS Rog Strix", "Intel", 11000);
	laptop lap;
	lap.show();
	cout << endl << "---------------------------------------------------------------" << endl;
	laptop lap1(hdd, ram, vga, cpu, mb, "Black");
	lap1.show();
	cout << endl << endl << "TOTAL PRICE = " << lap1.Get_price() << endl;
}