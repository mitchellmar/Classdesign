#include <iostream>
#include <string>
#include "URLParser.h"

url::url(std::string urlAddress)
	: fullurl{ urlAddress } {}

std::string url::getfullurl() const
{
	return fullurl;
}

std::string url::getscheme() const
{
	std::string scheme = fullurl.substr(0, fullurl.find(":")+1);
	return scheme;
}

std::string url::getauthority() const
{
	int as = fullurl.find("//");
	int ps = fullurl.find("/", as + 2);
	int ae = ps - as;
	std::string authority = fullurl.substr(as, ae);
	return authority;
}

std::string url::getpath() const
{
	int ss = fullurl.find(":")+3;
	int ps = fullurl.find("/", ss);
	std::string path = fullurl.substr(ps);
	return path;
}

std::ostream& operator<<(std::ostream& out, const url& param)
{
	out << std::string("URL: ") << param.getfullurl() << "\n";
	out << std::string("\t") << std::string("SCHEME: ") << param.getscheme() << "\n";
	out << std::string("\t") << std::string("AUTHORITY: " )<< param.getauthority() << "\n";
	out << std::string("\t") << std::string("PATH: ") << param.getpath();
	return out;
}