
#include <string>
#include "store_item.h"

store_item::store_item(std::string name, long id, double price, int stock)
	: myname{ name }, myid{ id }, myprice{ price }, mystock{ stock }{}

std::string store_item::getname()
{
	return myname;
}

long store_item::getid()
{
	return myid;
}

double store_item::getprice()
{
	return myprice;
}

int store_item::getstock()
{
	return mystock;
}

void store_item::setname(std::string newname)
{
	myname = newname;
}

void store_item::setid(long newid)
{
	myid = newid;
}

void store_item::setprice(double newprice)
{
	myprice = newprice;
}

void store_item::setstock(int newstock)
{
	mystock = newstock;
}
