
#pragma once
#include <iostream>
#include "boutique.h"
#include"product.h"

class cart
{

public:
	vector<product> SelectedCart;
	int total_products;

	product prod;

	
	cart();
	void add_to_cart(product p);
	void display_selected_Cart_products();
};