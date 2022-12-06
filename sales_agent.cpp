#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
#include<array>
#include<fstream>
#include "boutique.h"
#include "sales_agent.h"

using namespace std;

sales_agent::sales_agent(string id, string name, string outlet, string shift) : staff(id, name, outlet, shift)
{
	//do nothing
}
bool sales_agent::shop_status()		//Function that checks whether the shop is open or closed
{
	time_t t = time(NULL);
	tm* tPtr = localtime(&t);
	if (tPtr->tm_hour >= 9 && tPtr->tm_hour <= 17)		//Shop timing is from 9am to 5pm
		return true;
	else return false;
}
void sales_agent::scan_finger()
{
	if (shop_status())			//Checks if the shop is opened or closed
	{
		string choice = "\0";
		string specify = "\0";
		string id;
		while (choice != "SCAN")		//Wait for the user to scan the fingerprint in order to mark their attandance
		{
			cout << "Please enter SCAN to scan your thumb\n";
			cin >> choice;			//User is scanning the thumb
		}
		cout << "Specify that you are checking in or checking out\nEnter CO for check out\nEnter CI for check in\n";
		cin >> specify;				//User will specify that the rather he is check in or check out
		if (specify == "CO" || specify == "CI")
		{
			fstream in;
			in.open("Attandance.txt", ios::app);			//Attandance file is opening in order to mark attandance in it.
			cout << "Enter your ID for Attandance like (sa1,sa2,etc)\n";		//User enter his ID
			cin >> id;
			int i = 0;
			string c;
			char employeesIDs[30][30];
			fstream out;
			out.open("empshifts.txt", ios::in);			//Employees shift file will open in order to verify that the user is registered sales agent or not
			if (out.is_open())
			{
				while (!out.eof())						//Read the whole employee's file
				{
					int j = 0, idSum = 0, k = 0;
					getline(out, c);				//Read data line by line from file
					while (c[j] != '/')
					{
						employeesIDs[i][k++] = c[j++];		//stores the IDs of employees in in 2D array in order to match it with entered id
					}
					employeesIDs[i][k] = '\0';
					i++;
				}
				out.close();			//close the employee's file
				bool checkEmployee = false;
				for (int i = 0; i < end(employeesIDs) - begin(employeesIDs); i++)	//Loop to traverse the array in which registered employees IDs are stored
				{
					if (id == employeesIDs[i])		//Checks if the entered ID match with the registered ID
					{
						in << id;			//Write ID in the file
						in << "\t";
						in << specify << "\t";	//Write specification in the file
						time_t t = time(NULL);
						tm* tPtr = localtime(&t);
						in << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << "\t";	//Write Date in the file
						in << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;			//Write Time in the file
						checkEmployee = true;
						cout << "ID\t" << "Entry Mode\t" << "Date\t" << "Time\n";
						cout << id << "\t" << specify << "\t" << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << "\t" << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;
						cout << "Attandance has been succesfully marked\n";
						break;
					}
				}
				if (!checkEmployee)		//If the entered ID is not match
					cout << "You are the not eligible to mark the attandance\n";
			}
			else
			{
				cout << "Unable to open employees file\n";
				return ;
			}
		}
		else
		{
			cout << "You enterd wrong specification" << endl;
			return ;
		}

	}
	else
		cout << "SORRY(*_*)\nShop is closed you can not mark your attandance now!!\n";		//Print message if the shop is closed
}