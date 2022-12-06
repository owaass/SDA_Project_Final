#pragma once
#include <iostream>
#include "boutique.h"
#include"customer.h"


class loyalty_card //association w customer
{
public:
	int id;
	string expiry_date;
	int points;

	loyalty_card()
	{
		

	}
	loyalty_card(int id, string expiry_date, int points)
	{
		

	}
	//	int calculate_points();


	int loyalty_discount(int ID)//calc points
	{
		
	}

	int discount_code(string code, int loyalty)
	{
		

	}
	~loyalty_card();
};
