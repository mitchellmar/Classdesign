#include <iostream>
#include <string>
#include "imagedata.h"

imagedata:: imagedata(std::string filename, std::string imagetype, std::string datecreated
	, double size, std::string authname, std::string imgdim, std::string aperture,
	std::string exposure, int iso, bool flash)
	: myfilename{filename}, myimagetype{imagetype}, mydatecreated{datecreated}, mysize{size}, myauthname{authname},
	myimgdim{ imgdim }, myaperature{ aperture }, myexposure{ exposure }, myiso{ iso }, myflash{ flash } {}

//getters
std::string imagedata::getfilename() const
{
	return myfilename;
}

std::string imagedata::getimagetype() const
{
	return myimagetype;
}

std::string imagedata::getdatecreated() const
{
	return mydatecreated;
}

double imagedata::getsize() const
{
	return mysize;
}

std::string imagedata::getauthname() const
{
	return myauthname;
}

std::string imagedata::getimgdim() const
{
	return myimgdim;
}

std::string imagedata::getaperature() const
{
	return myaperature;
}

std::string imagedata::getexposure() const
{
	return myexposure;
}

int imagedata::getiso() const
{
	return myiso;
}

bool imagedata::getflash() const
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
std::ostream& operator<<(std::ostream& out, const imagedata& param)
{
	out << "File Name: " << param.getfilename() << "\n";
	out << "Image Type: " << param.getimagetype() << "\n";
	out << "Date Created: " << param.getdatecreated() << "\n";
	out << "Image size: " << param.getsize() << "\n";
	out << "Author Name: " << param.getauthname() << "\n";
	out << "Image Dimensions: " << param.getimgdim() << "\n";
	out << "Aperature: " << param.getaperature() << "\n";
	out << "Exposure: " << param.getexposure() << "\n";
	out << "ISO: " << param.getiso() << "\n";
	out << "Flash: " << param.getflash() << "\n";
	return out;
}