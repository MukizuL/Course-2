//variant 4
#include "Point2D.h"
#include "read_file.h"
#include "open_file.h"

int main(int argc, char* argv[])
{
	std::ifstream in = open_f("in5.txt");
	std::vector<Point2D> points = read_points_from_stream(in);

	std::cout.setf(std::ios::left);
	std::cout << std::setw(20) << "X" << std::setw(20) << "Y" << std::setw(20) << "Color" << std::endl;

	for(auto &elem : points)
	{
		elem.print_data();
	}
}
