#pragma once
#include <iostream>
#include "staff.h"
#include "sales_agent.h"
#include "floor_manager.h"
#include "store_manager.h"
#include "product.h"
#include "store_admin.h"
#include "inventory_manager.h"
#include <vector>
using namespace std;
class boutique
{

private:
	boutique();
public:                                 //singleton design pattern
	static boutique* operation();
	static boutique* instance;


	vector <staff*> staffdata;
	product* _product;
	int total_products;
	void readstaffFile();
	void display_all_products();
	
	float calculate_GST();
	//	~boutique();
};