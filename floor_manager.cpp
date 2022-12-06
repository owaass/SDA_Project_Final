#include <iostream>
#include "boutique.h"
#include"boutique.cpp"
#include "floor_manager.h"
#include "staff.h"

using namespace std;
floor_manager::floor_manager(string id,string name,string outlet,string shift) : staff(id, name, outlet, shift)
{
	//do nothing
}

/*void floor_manager::process_item_return()
{

}*/

/*void floor_manager::define_work_shift(boutique* b)
{
	


}*/
void floor_manager::change_work_shift(boutique* b)
{
	string oid,sid;
	cout << "\n Enter your outlet id Floor Manager : " ;
	cin >> oid;
	cout << "\n Enter the sales agent id of whom you want to change the shift : " ;
	cin >> sid;
	if (sid[0] != 's' && sid[1] != 'a')
	cout << "\n employee is not a sales agent sorry !!...  \n ";
	else
	{
		for (int i = 0; i < sizeof(b->staffdata); i++)
		{
			if (b->staffdata[i]->getid() == sid)
			{
				if (b->staffdata[i]->getoutlet() == oid)
				{
					string update_shift;
					cout << "\n Enter updated shift : ";
					cin >> update_shift;
					b->staffdata[i]->getshift() = update_shift;

				}
				else
				{
					cout << "\n you cannot update this sales agent work shift as outlets are not same\n";
					break;
				}


			}
			else
			{
				cout << "\n sales agent id invalid ...!! \n";
				break;
			}

		}
	}


}
/*floor_manager::~floor_manager()
{

}*/