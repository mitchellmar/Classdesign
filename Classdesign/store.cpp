#include <iostream>
#include <vector>
#include "store.h"
#include "store_order.h"

store::store(std::vector<store_item> itemlist)
	: myitemlist{ itemlist } {}

void store::additem(store_item newitem)
{
	myitemlist.push_back(newitem);
}

void store::processOrder(store_order const& order)
{
	std::vector<store_item> i = order.getorderlist();

	for (store_item order : i) {
		for (store_item stock : myitemlist) {
			if (order.getname() == stock.getname()) {
				stock.setstock(stock.getstock() - 1);
			}
		}
	}
}

std::ostream& operator<<(std::ostream& out, store param)
{
	out << "Store\n";
	for (store_item item : param.myitemlist)
	{
		out << item.getname() << " x " << item.getstock() << "\n";
	} 
	return out;
}