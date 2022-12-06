#include <iostream>
#include"loyalty_card.h"
#include "boutique.h"


using namespace std;


loyalty_card::loyalty_card()
{
	id = -1;
	expiry_date = "000000000";
	points = 0;
}
loyalty_card::loyalty_card(int id, string expiry_date, int points)
{
	this->id = id;
	this->expiry_date = expiry_date;
	this->points = points;
}
int loyalty_card::loyalty_discount(int ID)
{
	
		//check file to see discount in ID
		//return discunt
		int user_id = 0;
		string status = NULL;
		string b = "gold";
		string c = "silver";
		string a = "platinum";
		int discount = 0;
		//user id and status (gold, silver, bronze); 1st and 2nd column in file
		ifstream fin;
		//opening file
		fin.open("user_status.txt");
		//loop that will read data till the end of the file
		while (fin)
		{
			//reading from file and storing in variables
			fin >> user_id >> status;

			//checking to see if id of user is present in file and return discount 
			if (ID == user_id)
			{
				//setting discount percentage according to status
				//platinum
				if (status == a)
				{
					discount = 45;
				}
				//gold
				if (status == b)
				{
					discount = 30;
				}
				//silver
				if (status == c)
				{
					discount = 15;
				}

				return discount;
			}

		}
		fin.close();
		return 0;
		//closing file
	

	

}

int loyalty_card::discount_code(string code, int loyalty)
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



loyalty_card::~loyalty_card()
{

}
