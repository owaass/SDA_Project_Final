#include <iostream>
#include "boutique.h"
#include "inventory_manager.h"

using namespace std;

inventory_manager::inventory_manager(string id, string name, string outlet, string shift) : staff(id, name, outlet, shift)
{
	//do nothing
}
inventory_manager::inventory_manager()
{

}
void inventory_manager::manage_inventory_globally()
{

}
void inventory_manager::allocate_inventory_to_outlets()
{

}
void inventory_manager::define_stock_reservation_policy()
{

}
void inventory_manager::change_stock_reservation_policy()
{

}
inventory_manager::~inventory_manager()
{

}