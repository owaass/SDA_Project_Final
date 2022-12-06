
#include <iostream>
#include "boutique.h"
#include "loginsignup.h"

using namespace std;


login_signup::login_signup()
{
	total_customers = 5;
	int i = 0;
	ifstream fin("CustomersInfo.txt");
	cust = new customer[total_customers];
	while (!fin.eof())
	{
		fin >> cust[i].id;
		fin >> cust[i].password;
		fin >> cust[i].name;
		fin >> cust[i].phone_number;
		fin >> cust[i].address;
		fin >> cust[i].spending_brackets;

		i++;
		if (i == total_customers)
		{

			customer* newcust = new customer[total_customers * 2];
			for (int j = 0; j < i; j++)
			{


				newcust[j].id = cust[j].id;
				newcust[j].password = cust[j].password;
				newcust[j].name = cust[j].name;
				newcust[j].phone_number = cust[j].phone_number;
				newcust[j].address = cust[j].address;
				newcust[j].spending_brackets = cust[j].spending_brackets;

			}
			delete[]cust;
			cust = newcust;
			total_customers = total_customers * 2;
		}
	}
	total_customers = i - 1;



	fin.close();
}



void login_signup::signup(customer c)
{
	ofstream fout("CustomersInfo.txt", ios::app);
	c.id = total_customers;
	cout << "YOUR ID FOR LOGIN IS " << c.id << "\n YOU HAVE TO REMEMBER YOUR ID FOR LOGGING IN\n";
	fout << c.id << " ";
	fout << c.password << " ";
	fout << c.name << " ";
	fout << c.phone_number << " ";
	fout << c.address << " ";
	fout << c.spending_brackets << endl;
	cout << "\nYOU SIGNED UP SUCCESSFULLYYYY!!!!!!\n";
	fout.close();
}
bool login_signup::login(customer c)
{

for (int i = 0; i < 10; i++)
		{
			if (c.id == cust[i].id)
			{
				if (c.password == cust[i].password)
				{
					cout << "\n You are logged in " << endl;
					return true;
				}
				else
				{
					cout << "\nIncorrect Password \n\n";
					do {
						cout << "\nEnter password again \n\n";
						cin >> c.password;

					} while (c.password != cust[i].password);
				}
			}



		}
		return true;

}

/*login_signup::~login_signup()
{

}*/