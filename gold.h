#pragma once
#include <iostream>
#include"loyalty_card.h"
#include "boutique.h"

class gold : public loyalty_card
{
	static int discount;

	gold(int discount);
	gold();
};
