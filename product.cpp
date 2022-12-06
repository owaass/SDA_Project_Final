#include <iostream>
#include "product.h"
using namespace std;




product::product()
{
	id = -1;
	price = -1;
	quantity = -1;
	description = "00000000000";
}
product::product(int id, float price, string description, int quantity)
{

	this->id = id;
	this->price = price;
	this->quantity = quantity;
	this->description = description;

}

product::~product()
{

}
