#pragma once
class VGA
{
	double price;
	int MB;
	char* name;
	char* production;
public:
	VGA() = default;
	VGA(const char* _name, const char* _production, int _MB, double _price);
	char* Get_name()const
	{
		return name;
	}
	char* Get_production()const
	{
		return production;
	}
	int Get_MB()const
	{
		return MB;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_name(const char* _name);
	void Set_production(const char* _production);
	void Set_MB(int _MB);
	void Set_price(double _price);
	void show()const;
	~VGA();
};