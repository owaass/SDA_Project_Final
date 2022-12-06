#pragma once
#include <iostream>
#include "boutique.h"


using namespace std;

class staff //association w login signup 
{
	string id;
	string name;
	string outlet;
	string shift;

public:
	staff(string id, string name, string outlet, string shift);
	staff();
	string getid();
	string getname();
	string getoutlet();
	string getshift();


};