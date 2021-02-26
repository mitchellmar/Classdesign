#include <vector>
#include "store_item.h"


class store_order
{
public:
	store_order(std::vector<store_item> orderlist);

	double gettotalprice();

	void additem(store_item neworder);

private:
	std::vector<store_item> myorderlist;
	double total;
};

