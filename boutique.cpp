#include <iostream>
#include <string>
#include <fstream>
#include "boutique.h"
using namespace std;


boutique * boutique :: operation()
{
    if (instance == NULL)  //singleton design pattern
        instance = new boutique();

    else
        return NULL;

    return instance;
}



boutique::boutique()
{
    total_products = 4;
    ifstream fin("ProductsInfo.txt");
    int i = 0;
    _product = new product[total_products];

    while (!fin.eof())
    {

        fin >> _product[i].id;
        fin >> _product[i].price;
        fin >> _product[i].quantity;
        getline(fin, _product[i].description);


        i++;
        if (i == total_products)
        {

            product* newprod = new product[total_products * 2];
            for (int j = 0; j < i; j++)
            {


                newprod[j].id = _product[j].id;
                newprod[j].price = _product[j].price;
                newprod[j].description = _product[j].description;
                newprod[j].quantity = _product[j].quantity;

            }
            delete[]_product;
            _product = newprod;
            total_products = total_products * 2;
        }
    }
    total_products = i;

    fin.close();


}

void boutique::display_all_products()
{
    for (int i = 0; i < total_products; i++)
    {
        cout << "============ PRODUCT " << i + 1 << " ============\t\t============ PRODUCT " << i + 2 << " ============\n\n";

        cout << "ID: " << _product[i].id;
        if (i + 1 < total_products)
            cout << "\t\t\t\t\t\t ID: " << _product[i + 1].id << endl;

        cout << "Description: " << _product[i].description;
        if (i + 1 < total_products)
            cout << "\t\t\t Description: " << _product[i + 1].description << endl;

        cout << "Price: " << _product[i].price;
        if (i + 1 < total_products)
            cout << "\t\t\t\t\t Price: " << _product[i + 1].price << endl << endl;

        if (i + 1 < total_products)
            i++;

    }
}
float  boutique::calculate_GST()
{
    return -1;
}
//	~boutique();

void boutique::readstaffFile() {

       // cout << "Hello World\n";
        string file;
        string id;
        string name;
        string outlet;
        string shift;
        ifstream employee("empshifts.txt");
        
        if (employee.is_open()) {
            while (!employee.eof())
            {
                string id = "";
                string name = "";
                string outlet = "";
                string shift = "";
                getline(employee, id, '/');
                getline(employee, name, '/');
                getline(employee, outlet, '/');
                getline(employee, shift);

                if (id[0] == 's' && id[1] == 'a') 
                {
                    staffdata.push_back(new sales_agent(id, name, outlet, shift));
             
                }
                if (id[0] == 'f' && id[1] == 'm')
                {
                    staffdata.push_back(new floor_manager(id, name, outlet, shift));

                }
                if (id[0] == 's' && id[1] == 'm')
                { 
                    staffdata.push_back(new store_manager(id, name, outlet, shift));

                }
                if (id[0] == 'a' && id[1] == 'd')
                {
                    staffdata.push_back(new store_admin(id, name, outlet, shift));

                }
                if (id[0] == 'i' && id[1] == 'm')
                {
                    staffdata.push_back(new inventory_manager(id, name, outlet, shift));

                }


            }
        }
        employee.close();


        return;
    }




float boutique::calculate_GST()
{


}