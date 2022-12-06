
#include <iostream>
#include "boutique.h"

#include "discount_campaign.h"


using namespace std;
discount_campaign::discount_campaign()
{


}

discount_campaign::discount_campaign(int duration, string event_type)
{


}

discount_campaign::~discount_campaign()
{

}

int discount_campaign::discount_code(string code, int loyalty)
{
	int discount;
	//check file for code, get discount
	int discount_perc = 0;
	string discount_code = NULL;
	//discount code and discount percentage in file; 1st and 2nd column
	ifstream fin;
	//opening file
	fin.open("discount.txt");
	//loop that will read data till the end of the file
	while (fin)
	{
		//reading from file and storing in variables
		fin >> discount_code >> discount_perc;
		//checking to see if code enetered by user is same as the one in the file
		if (code == discount_code)
		{
			//if same code then return dicount percentage
			if (loyalty > discount)
				return loyalty;
			else
				return discount_perc;
		}
	}

	//closing file
	fin.close();
	return 0;

}