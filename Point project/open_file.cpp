
#include "open_file.h"

std::ifstream open_f(const std::string &file)
{
	std::ifstream res;
	res.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	
	res.open(file);
	return res;
}