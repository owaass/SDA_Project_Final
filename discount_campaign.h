#pragma once
#include <iostream>
#include "boutique.h"


class discount_campaign //association w payment
{
	int duration;
	string event_type;
	discount_campaign(int duration, string event_type);
	discount_campaign();
	~discount_campaign();
	int discount_code(string code, int loyalty);
	
};