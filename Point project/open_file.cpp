#include "open_file.h"

std::ifstream open_f(const std::string &file)
{
	std::ifstream res;
	res.exceptions(std::ifstream::badbit | std::ifstream::failbit);

	try
	{
		res.open(file);
	}
	catch(const std::ifstream::failure& ex)
	{
		std::cerr << ex.what() << ", " << ex.code();
		exit(1);
	}
	return res;
}