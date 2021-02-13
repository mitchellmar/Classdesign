#include <vector>
#include <iostream>
#include "store_order.h"

store_order::store_order(std::vector<store_item> orderlist)
	: myorderlist{ orderlist } {}

double store_order::gettotalprice()
{
	total = 0;

	for (store_item order : myorderlist)
	{
		total += order.getprice();
	}

	return total;
}

void store_order::removeitem(store_item removeorder)
{
	remove(myorderlist.begin(), myorderlist.end(), removeorder);
}

void store_order::additem(store_item neworder)
{
	myorderlist.push_back(neworder);
}