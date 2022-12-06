#include "boutique.h"
#include "customer.h"
#include "staff.h"
#include "online.h"
#include "cart.h"
#include "outlet.h"
#include "gold.h"
#include "silver.h"
#include "platinum.h"
#include "payment.h"
#include "discount_compaign.h"
#include "product.h"
#include "loyalty_card.h"
#include "login_signup.h"
#include "inventory_manager.h"
#include "floor_manager.h"
#include "store_manager.h"
#include "sales_agent.h"
#include<iostream>
#include <string>
#include <vector>
#include <fstream>





using namespace std;


int main()
{
	boutique* b = operation();  //singleton 
	change_work_shift(b);


	online o;
	char input;
	string username;
	string password;
	boutique b;
	cout << "===============================================================================================\n";
	cout << "\t\t\t\tWELCOME TO S&J BOUTIQUE\n";
	cout << "===============================================================================================\n\n";
	cout << "Enter C if you are a customer or S if you are a staff member\n";
	cin >> input;
	cout << "Your Choice: " << input << endl << endl;
	//customer
	if (input == 'c' || input == 'C')
	{
		cout << "Please enter a number from the list corresponding to your preference\n";
		cout << "1 I am a new customer\n";
		cout << "2 I am a recurring customer\n";
		cout << "3 I would like to browse anonymously\n";
		cin >> input;
		cout << "Your entered preference  " << input << endl << endl;
		if (input == '1')
		{
			customer c;
			cout << "=========== SIGNING UP ===========\n";
			cout << "Please sign up by creating a new username and password\n";


			cout << "Enter your prefered password: ";
			cin.ignore(1000, '\n');
			cin >> c.password;

			cout << "Enter your prefered name: ";
			cin.ignore(1000, '\n');
			cin >> c.name;

			cout << "Enter your phone number for contact: ";
			cin.ignore(1000, '\n');
			cin >> c.phone_number;

			cout << "Enter your address: ";
			cin.ignore(1000, '\n');
			cin >> c.address;

			cout << "Enter your spending brackets: ";
			cin.ignore(1000, '\n');
			cin >> c.spending_brackets;


			login_signup ls;
			ls.signup(c);


		}
		else if (input == '2')
		{
			//crate recurring customer obj
			customer c;
			cout << "=========== LOGGING IN ===========\n";
			cout << "Welcome back! Please sign in\n";
			cout << "Enter your userid: ";
			cin >> c.id;
			cout << "Enter your password: ";
			cin.ignore(1000, '\n');
			cin >> c.password;


			login_signup ls;
			//	ls.login(c);
			if (ls.login(c))
			{

				int orderedProductId = 0;

				system("cls");
				b.display_all_products();
				cout << "Enter product ids to be added to cart \nPress -1 for checkout\n\n";
				cout << "============= IDs =============\n";
				for (int i = 0; orderedProductId != -1; i++)
				{
					cin >> orderedProductId;
					c.addtocart(orderedProductId);
				}
			}

		}

		else if (input == '3')
		{
			//crate anon customer obj
		}

		else
		{
			cout << "Incorrect input\n";
			return 0;
		}

	}



	
}