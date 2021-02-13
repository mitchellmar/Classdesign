#include <iostream>
#include <string>
#include "URLParser.h"

url::url(std::string urlAddress)
	: fullurl{ urlAddress } {}

std::string url::getfullurl()
{
	return fullurl;
}

std::string url::getscheme()
{
	scheme = fullurl.substr(0, fullurl.find(":")+1);
	return scheme;
}

std::string url::getauthority()
{
	int as = fullurl.find("//");
	int ps = fullurl.find("/", as + 2);
	int ae = ps - as;
	authority = fullurl.substr(as, ae);
	return authority;
}

std::string url::getpath()
{
	int ss = fullurl.find(":")+3;
	int ps = fullurl.find("/", ss);
	path = fullurl.substr(ps);
	return path;
}