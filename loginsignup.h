#pragma once
#include <iostream>
#include "staff.h"
#include "customer.h"
#include "boutique.h"
using namespace std;

class login_signup
{
public:
	staff* staff;
	customer* cust;
	int total_customers;
	//	login_signup(staff staff, customer customer);
	login_signup();
	
	bool login(customer c);
	
	void signup(customer c);
	
	
};

