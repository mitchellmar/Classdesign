#pragma once
#include <string>
class store_item
{
public:
	store_item(std::string name, long id, double price, int stock);

	std::string getname();
	long getid();
	double getprice();
	int getstock();

	void setname(std::string newname);
	void setid(long newid);
	void setprice(double newprice);
	void setstock(int newstock);

private:
	std::string myname;
	long myid;
	double myprice;
	int mystock;
};

