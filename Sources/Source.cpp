﻿//variant 4

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


class Point2D
{
private:

	double x_;
	double y_;
	string color_;

public:

	Point2D()
	{
		x_ = 0;
		y_ = 0;
		color_ = "red";
	}

	explicit Point2D(ifstream& infile)
	{
		infile >> x_ >> y_ >> color_;
	}

	static void print_data(const Point2D& out)
	{
		cout << out.x_ << "         " << out.y_ << "          " << out.color_ << endl;
	}
};


int main()
{
	ifstream infile;
	infile.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		infile.open("in.tt");
	}
	catch(const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		return 0;
	}

	vector<Point2D> point_2ds;
	size_t n = 0;

	cout << "X" << "          " << "Y" << "          " << "Color" << endl;

	while (infile.eof() != true)
	{
		point_2ds.emplace_back(infile);
		Point2D::print_data(point_2ds[n]);
		n++;
	}

	infile.close();
}