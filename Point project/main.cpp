//variant 4

#include <Point Project\main.h>


int main(int argc, char* argv[])
{
	std::ifstream infile;
	infile.exceptions(std::ifstream::badbit | std::ifstream::failbit);

	try
	{
		infile.open("in.txt");
	}
	catch(const std::ifstream::failure& ex)
	{
		std::cout << ex.what() << std::endl;
		std::cout << ex.code() << std::endl;
		return 0;
	}

	std::vector<Point2D> point_2ds;
	size_t n = 0;

	std::cout.setf(std::ios::left);
	std::cout << std::setw(20) << "X" << std::setw(20) << "Y" << std::setw(20) << "Color" << std::endl;

	while (infile.eof() != true)
	{
		point_2ds.emplace_back(infile);
		Point2D::print_data(point_2ds[n]);
		n++;
	}

	infile.close();
}
