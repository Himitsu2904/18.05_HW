#pragma once
class CPU
{
	double price;
	int Ghz;
	char* name;
	char* production;
public:
	CPU() = default;
	CPU(const char* _name, const char* _production, int _Ghz, double _price);
	char* Get_name()const
	{
		return name;
	}
	char* Get_production()const
	{
		return production;
	}
	int Get_Ghz()const
	{
		return Ghz;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_name(const char* _name);
	void Set_production(const char* _production);
	void Set_Ghz(int _Ghz);
	void Set_price(double _price);
	void show()const;
	~CPU();
};

