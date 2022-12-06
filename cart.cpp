#include <iostream>
#include "boutique.h"
#include "cart.h"
#include"product.h"
using namespace std;

cart::cart()
{

}


void cart::add_to_cart(product p)
{
	SelectedCart.push_back(p);

}

void cart::display_selected_Cart_products()
{
	int vecSize = SelectedCart.size();

	// run for loop from 0 to vecSize
	for (unsigned int i = 0; i < vecSize; i++)
	{

		cout << "============ PRODUCT " << i + 1 << " ============\t============ PRODUCT " << i + 2 << " ============\n\n";
		cout << "ID: " << SelectedCart[i].id << "\tID: " << SelectedCart[i + 1].id << "\n";
		cout << "Description: " << SelectedCart[i].description << "\tDescription: " << SelectedCart[i + 1].description << "\n";
		cout << "Price: " << SelectedCart[i].price << "\tPrice: " << SelectedCart[i + 1].price << "\n";

		i++;
	}
}
//	~cart();
	SelectedCart.push_back(p);
}



cart::~cart()
{

}
