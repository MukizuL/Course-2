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
		std::cout << ex.what() << std::endl;
		std::cout << ex.code() << std::endl;
		return {};
	}
	return res;
}