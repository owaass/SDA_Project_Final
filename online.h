
#pragma once
#include <iostream>
#include "boutique.h"
using namespace std;


class online : public boutique  
{
	product* prod; 

	online();
	~online();
};