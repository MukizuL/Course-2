//variant 4
#include "Point2D.h"
#include "read_file.h"
#include "open_file.h"

int main(int argc, char* argv[])
{
	try
	{
		std::ifstream in = open_f("in.txt");
		const std::vector<Point2D> points = read_points_from_stream(in);

		std::cout.setf(std::ios::left);
		std::cout << std::setw(20) << "X" << std::setw(20) << "Y" << std::setw(20) << "Color" << std::endl;

		for(auto &elem : points)
		{
			elem.print_data();
		}
	}
	catch(const std::ifstream::failure& ex)
	{
		std::cerr << ex.what() << ", " << ex.code();
		exit(1);
	}
	catch(const std::out_of_range& ex)
	{
		std::cerr << "Unsupported color, stopping...\n";
		std::cout << ex.what();
		exit(1);
	}
}
