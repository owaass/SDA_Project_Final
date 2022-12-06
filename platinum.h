#pragma once
#include <iostream>
#include"loyalty_card.h"
#include "boutique.h"

class platinum : public loyalty_card
{
	static int discount;

	platinum();

	platinum(int discount);
};
