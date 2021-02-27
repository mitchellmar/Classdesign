
#include <iostream>
#include <string>
#include "store_item.h"

store_item::store_item(std::string name, long id, double price, int stock)
	: myname{ name }, myid{ id }, myprice{ price }, mystock{ stock }{}

std::string store_item::getname() const
{
	return myname;
}

long store_item::getid() const
{
	return myid;
}

double store_item::getprice() const
{
	return myprice;
}

int store_item::getstock() const
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


std::ostream& operator<<(std::ostream& out, const store_item& param)
{
	out << param.getname() << " ID: " << param.getid() << " PRICE: " << param.getprice() << " STOCK: " << param.getstock();
	return out;
}