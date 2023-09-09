//variant 4

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


struct Name
{
	double x;
	double y;
	string color;
};


Name read_from_file(ifstream& infile)
{
	Name output{};
	infile >> output.x >> output.y >> output.color;
	return output;
}


void print_data(const Name& out)
{
		cout << out.x << "         " << out.y << "          " << out.color << endl;
}


int main()
{
	ifstream infile("in.txt");
	vector<Name> names;
	size_t n = 0;

	cout << "X" << "          " << "Y" << "          " << "Color" << endl;

	while (infile.eof() != true)
	{
		names.push_back(read_from_file(infile));
		print_data(names[n]);
		n++;
	}
	infile.close();
}