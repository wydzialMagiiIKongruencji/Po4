#pragma once
#include <iostream>
class Laptop
{
protected:
	bool StanTechniczny;
	 
public:
	Laptop();
	virtual std::string nazwa();
	bool getStanTechniczny();

	~Laptop();
};

