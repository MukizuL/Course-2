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


void print(const vector<Name>& names, const size_t n)
{
		cout << names[n].x << "         " << names[n].y << "          " << names[n].color << endl;
}


int main()
{
	ifstream in("in.txt");
	vector<Name> names;
	size_t n = 0;

	cout << "X" << "          " << "Y" << "          " << "Color" << endl;

	while (in.eof() != true)
	{
		names.push_back(read_from_file(in));
		print(names, n);
		n++;
	}
	in.close();
}