#pragma once
#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
#include<array>
#include<fstream>
#include "boutique.h"
using namespace std;

class sales_agent : public staff
{
	//association w floor manager
	//association w store manager
public:
	sales_agent(string id, string name, string outlet, string shift);
	bool shop_status();
	void scan_finger();
};