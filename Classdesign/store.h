#pragma once
#include <vector>
#include "store_item.h"

class store
{
public:
	store(std::vector<store_item> itemlist);
	void additem(store_item newitem);
	void removeitem(store_item itemremove);
	void printstorelist(store param);

private:
	std::vector<store_item> myitemlist;
};



