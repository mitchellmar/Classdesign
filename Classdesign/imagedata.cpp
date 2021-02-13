#include <iostream>
#include <string>
#include "imagedata.h"

imagedata:: imagedata(std::string filename, std::string imagetype, std::string datecreated
	, double size, std::string authname, std::string imgdim, std::string aperture,
	std::string exposure, int iso, bool flash)
	: myfilename{filename}, myimagetype{imagetype}, mydatecreated{datecreated}, mysize{size}, myauthname{authname},
	myimgdim{ imgdim }, myaperature{ aperture }, myexposure{ exposure }, myiso{ iso }, myflash{ flash } {}

//getters
std::string imagedata::getfilename()
{
	return myfilename;
}

std::string imagedata::getimagetype()
{
	return myimagetype;
}

std::string imagedata::getdatecreated()
{
	return mydatecreated;
}

double imagedata::getsize()
{
	return mysize;
}

std::string imagedata::getauthname()
{
	return myauthname;
}

std::string imagedata::getimgdim()
{
	return myimgdim;
}

std::string imagedata::getaperature()
{
	return myaperature;
}

std::string imagedata::getexposure()
{
	return myexposure;
}

int imagedata::getiso()
{
	return myiso;
}

bool imagedata::getflash() 
{
	return myflash;
}

//setters
void imagedata::setfilename(std::string newfilename)
{
	if (size(newfilename) > 0) {
		myfilename = newfilename;
	}
}

void imagedata::setimagetype(std::string newimagetype)
{
	if (newimagetype == "PNG" || "GIF" || "JPEG") {
		myimagetype = newimagetype;
	}
}

void imagedata::setdatecreated(int newday, int newmonth, int newyear)
{
	if (0 < newday < 32 || 0 < newmonth < 13 || newyear>0) {
		mydatecreated = std::to_string(newday) + "/" + std::to_string(newmonth) + "/" + std::to_string(newyear);
	}
}

void imagedata::setsize(double newsize)
{
	if (newsize >= 0) {
		mysize = newsize;
	}
}

void imagedata::setauthname(std::string newname) 
{
	if (size(newname) > 0) {
		myauthname = newname;
	}
}

void imagedata::setimgdim(int newwidth, int newheight)
{
	if (newheight && newwidth > 0) {
		myimgdim = std::to_string(newwidth)+"x"+std::to_string(newheight);
	}
}

void imagedata::setaperature(int newaperature)
{
	if (newaperature >= 0) {
		myaperature = "f/"+ std::to_string(newaperature);
	}
}

void imagedata::setexposure(int newexposure)
{
	if (newexposure > 0) {
		myexposure = "1/" + std::to_string(newexposure);
	}
}

void imagedata::setiso(int newiso)
{
	if (newiso > 0) {
		myiso = newiso;
	}
}

void imagedata::setflash(bool newflash)
{
	myflash = newflash;
}

//prints entire data
void printimageinformation(imagedata param)
{
	std::cout << "File Name: " << param.getfilename() << "\n";
	std::cout << "Image Type: " << param.getimagetype() << "\n";
	std::cout << "Date Created: " << param.getdatecreated() << "\n";
	std::cout << "Image size: " << param.getsize() << "\n";
	std::cout << "Author Name: " << param.getauthname() << "\n";
	std::cout << "Image Dimensions: " << param.getimgdim() << "\n";
	std::cout << "Aperature: " << param.getaperature() << "\n";
	std::cout << "Exposure: " << param.getexposure() << "\n";
	std::cout << "ISO: " << param.getiso() << "\n";
	std::cout << "Flash: " << param.getflash() << "\n";
}