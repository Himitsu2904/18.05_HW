#pragma once
class mother_board
{
	double price;
	char* name;
	char* production;
public:
	mother_board() = default;
	mother_board(const char* _name, const char* _production, double _price);
	char* Get_name()const
	{
		return name;
	}
	char* Get_production()const
	{
		return production;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_name(const char* _name);
	void Set_production(const char* _production);
	void Set_price(double _price);
	void show()const;
	~mother_board();
};

