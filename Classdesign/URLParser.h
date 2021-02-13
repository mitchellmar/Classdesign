#include <string>

class url {
public:
	url(std::string urlAddress);
	std::string getfullurl();
	std::string getscheme();
	std::string getauthority();
	std::string getpath();

private:
	std::string fullurl;
	std::string scheme;
	std::string authority;
	std::string path;
};
