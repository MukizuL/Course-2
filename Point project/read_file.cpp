
#include "read_file.h"

std::vector<Point2D> read_points_from_stream(std::istream& in)
{
	std::vector<Point2D> res;
	while (in.eof() != true)
	{
		res.emplace_back(in);
	}
	return res;
}