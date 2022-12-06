#pragma once
#include <iostream>
#include "boutique.h"
#include "cart.h"




class customer //asocciation w login signup
{
public:
	boutique* boutique;
	cart* cart;
	int id;
	string password;
	string name;
	string phone_number;
	string address;
	int spending_brackets;
	customer();

	customer(int id, string password, string name, string phone_number, string address, int spending_brackets);


	void AddToCart(int ID);


		void checkout();

	//	~customer();
};
