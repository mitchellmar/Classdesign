#include <iostream>
#include <string>
#include "URLParser.h"
#include "imagedata.h"

int main()
{
	//test
	url u1{ "https://example.com/some/path/to/file.txt" };
	std::cout << u1;//.getfullurl() << "\n" << u1.getscheme() << "\n" << u1.getauthority() << "\n" << u1.getpath() << "\n";

	//imagedata i1{ "fileone", "PNG", "12/20/2020", 10.5, "mitchell", "120x160", "f/5", "1/100", 300, true };
	//printimageinformation(i1);

}