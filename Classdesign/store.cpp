#include <iostream>
#include <vector>
#include "store.h"

store::store(std::vector<store_item> itemlist)
	: myitemlist{ itemlist } {}

void store::additem(store_item newitem)
{
	myitemlist.push_back(newitem);
}

void store::printstorelist(store param)
{
	std::cout << "Store\n";
	for (store_item item : myitemlist)
	{
		std::cout << item.getname() << " x " << item.getstock() << "\n";
	}
}