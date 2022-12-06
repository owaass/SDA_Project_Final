#include <iostream>
#include "boutique.h"
using namespace std;

class store_admin: public staff
{
public:
	store_admin();
	store_admin(string id, string name, string outlet, string shift);
	void create_outlet();
	void update_outlet();
	void block_outlet();
	void delete_outlet();
	void reallocate_outlet();
	void move_users();
	void user_account_activation();
	~store_admin();
};