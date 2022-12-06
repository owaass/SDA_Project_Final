#pragma once
#include <iostream>
#include"loyalty_card.h"
#include "boutique.h"

class silver : public loyalty_card
{
	static int discount;

	silver(int discount);
	silver();
};
