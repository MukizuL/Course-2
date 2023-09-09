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


int main()
{
	ifstream in("in.txt");
	vector<Name> names;
	size_t n = 0;

	cout << "X" << "          " << "Y" << "          " << "Color" << endl;

	while (in.eof() != true)
	{
		Name output;
		in >> output.x >> output.y >> output.color;
		names.push_back(output);

		cout << names[n].x << "         " << names[n].y << "          " << names[n].color << endl;
		n++;
	}
}