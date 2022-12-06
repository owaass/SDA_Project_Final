#include <iostream>
#include "boutique.h"
#include "staff.h"

using namespace std;


staff::staff(string id, string name, string outlet, string shift)
{
	id = id;
	name = name;
	outlet = outlet;
	shift = shift;

}

staff::staff()
{

}
 
string getname();
string getoutlet();
string getshift();

string staff::getid()
{
	return id;
}
string staff::getname()
{
	return name;
}
string staff::getshift()
{
	return shift;
}
 
string staff::getoutlet()
{
	return outlet;
}
staff::~staff()
{

}
