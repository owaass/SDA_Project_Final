#include <iostream>
#include "boutique.h"
#include"boutique.cpp"
using namespace std;

class floor_manager : public staff
{
public:
	floor_manager(string id, string name, string outlet, string shift);
	//void track_attendance();
	//void run_sales_reports();
	//void process_item_return();
	//void define_work_shift(boutique* b);
	void change_work_shift(boutique* b);
	//~floor_manager();
};