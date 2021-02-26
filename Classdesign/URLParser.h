#include<iostream>
#include <string>

class url {
public:
	url(std::string urlAddress);
	std::string getfullurl() const;
	std::string getscheme() const;
	std::string getauthority() const;
	std::string getpath() const;

private:
	std::string fullurl;
	std::string scheme;
	std::string authority;
	std::string path;
};

std::ostream& operator<<(std::ostream& out, const url& param);