#include"dma.h"
#include<cstring>	
//baseDMA methods
baseDMA::baseDMA(const char *l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}

baseDMA::baseDMA(const baseDMA &rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}

baseDMA::~baseDMA()
{
	delete []label;
}

baseDMA & baseDMA::operator=(const baseDMA &hs)
{
	if (this == &hs)
		return *this;
	delete[] this->label;
	rating = hs.rating;
	label = new char[std::strlen(hs.label) + 1];
	std::strcpy(label, hs.label);
	return *this;
}

std::ostream & operator<<(std::ostream &os, const baseDMA &rs)
{
	os << "Label :" << rs.label << std::endl;
	os << "Rating :" << rs.rating << std::endl;
	return os;
}

lacksDMA::lacksDMA(const char *s, const char * l, int r):baseDMA(l,r)
{
	std::strncpy(color, s, 39);
	color[39] = '\0';
}
lacksDMA::lacksDMA(const char *s, const baseDMA &rs) :baseDMA(rs)
{
	std::strncpy(color, s, COL_LEN-1);
	color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream &os, const lacksDMA &rs)
{
	//os << "Label :" << rs.label << std::endl;
	os << (const baseDMA &)rs;
	os << "color :" << rs.color << std::endl;
	return os;
}