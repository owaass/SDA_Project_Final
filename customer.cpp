

#include <iostream>
#include "boutique.h"
#include "customer.h"


customer::customer()
{
	id = -1;
	password = "";
	name = "";
	phone_number = "";
	address = "";
	spending_brackets = -1;
}

customer::customer(int id, string password, string name, string phone_number, string address, int spending_brackets)
{
	id = this->id;
	password = this->password;
	name = this->name;
	phone_number = this->phone_number;
	address = this->address;
	spending_brackets = this->spending_brackets;
}
void customer::AddToCart(int ID)
{
	for (int i = 0; i < boutique->total_products; i++)
	{

		if (boutique->_product[i].id == ID)
		{

			if (boutique->_product[i].quantity > 0)
			{
				boutique->_product[i].quantity = boutique->_product[i].quantity - 1;
				cart->add_to_cart(boutique->_product[i]);
			}
			else
			{
				cout << "PRODUCT OUT OF STOCKKK!!! \n";
			}
			break;
		}
		else
		{
			cout << "INVALID PRODUCT ID !!!!! \n";
		}
	}

}
void customer::checkout()
{
	int vecSize = cart->SelectedCart.size();

	// run for loop from 0 to vecSize
	for (unsigned int i = 0; i < vecSize; i++)
	{

	}
}
customer::~customer()
{

}