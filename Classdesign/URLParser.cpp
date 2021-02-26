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
	size_t as = fullurl.find("//");
	size_t ps = fullurl.find("/", as + 2);
	size_t ae = ps - as;
	std::string authority = fullurl.substr(as, ae);
	return authority;
}

std::string url::getpath() const
{
	size_t ss = fullurl.find(":")+3;
	size_t ps = fullurl.find("/", ss);
	std::string path = fullurl.substr(ps);
	return path;
}

std::ostream& operator<<(std::ostream& out, const url& param)
{
	out << "URL: " << param.getfullurl() << "\n";
	out << "\t" << "SCHEME: "<< param.getscheme() << "\n";
	out << "\t" <<"AUTHORITY: "<< param.getauthority() << "\n";
	out << "\t" << "PATH: " << param.getpath();
	return out;
}