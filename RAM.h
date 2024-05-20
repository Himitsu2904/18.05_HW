#pragma once
class RAM
{
	double price;
	int GB;
	char* name;
	char* production;
public:
	RAM() = default;
	RAM(const char* _name, const char* _production, int _GB, double _price);
	char* Get_name()const
	{
		return name;
	}
	char* Get_production()const
	{
		return production;
	}
	int Get_GB()const
	{
		return GB;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_name(const char* _name);
	void Set_production(const char* _production);
	void Set_GB(int _GB);
	void Set_price(double _price);
	void show()const;
	~RAM();
};

