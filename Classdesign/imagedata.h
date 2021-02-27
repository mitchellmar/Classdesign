#include <string>

class imagedata{
public:
	imagedata(std::string filename, std::string imagetype, std::string datecreated
		, double size, std::string authname, std::string imgdim, std::string aperture,
		std::string exposure, int iso, bool flash);

	std::string getfilename() const;
	std::string getimagetype() const;
	std::string getdatecreated() const;
	double getsize() const;
	std::string getauthname() const;
	std::string getimgdim() const;
	std::string getaperature() const;
	std::string getexposure() const;
	int getiso() const;
	bool getflash() const;

	void setfilename(std::string newfilename);
	void setimagetype(std::string newimagetype);
	void setdatecreated(int newday, int newmonth, int newyear);
	void setsize(double newsize);
	void setauthname(std::string newname);
	void setimgdim(int newwidth, int newheight);
	void setaperature(int newaperature);
	void setexposure(int newexposure);
	void setiso(int newiso);
	void setflash(bool newflash);

private: 
	std::string myfilename;
	std::string myimagetype;
	std::string mydatecreated;
	double mysize;
	std::string myauthname;
	std::string myimgdim;
	std::string myaperature;
	std::string myexposure;
	int myiso;
	bool myflash;
};

std::ostream& operator<<(std::ostream& out, const imagedata& param);