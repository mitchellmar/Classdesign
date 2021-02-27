#pragma once
#include <vector>
#include "store_item.h"
#include "store_order.h"

class store
{
public:
	store(std::vector<store_item> itemlist);
	void additem(store_item newitem);
	
	void processOrder(store_order const& order);

	std::vector<store_item> myitemlist;
	
};

std::ostream& operator<<(std::ostream& out, store param);

