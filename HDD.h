#pragma once
class HDD
{
	double price;
	int Ghz;
	char* name;
	char* production;
	char* memory;
public:
	HDD() = default;
	HDD(const char* _name, const char* _production, const char* _memory, int _Ghz, double _price);
	char* Get_name()const
	{
		return name;
	}
	char* Get_production()const
	{
		return production;
	}
	char* Get_memory()const
	{
		return memory;
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
	void Set_memory(const char* _memory);
	void Set_Ghz(int _Ghz);
	void Set_price(double _price);
	void show()const;
	~HDD();
};

