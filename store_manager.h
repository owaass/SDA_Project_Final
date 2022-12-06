#include <iostream>
#include "boutique.h"

using namespace std;

class store_manager : public staff
{
	//string bestselling_item;
public:
	//store_manager();
	store_manager(string id, string name, string outlet, string shift);
	void modify_rules();
	void run_monthly_reports();
	void run_annual_reports();
	void record_user_category();
	void performance();
	//~store_manager();
};