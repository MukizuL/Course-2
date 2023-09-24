#pragma once

#include <fstream>
#include <iostream>
#include <vector>

class Point2D
{
private:

	double x_;
	double y_;
	std::string color_;

public:

	Point2D()
	{
		x_ = 0;
		y_ = 0;
		color_ = "red";
	}

	explicit Point2D(std::ifstream& infile)
	{
		infile >> x_ >> y_ >> color_;
	}

	static void print_data(const Point2D& out)
	{
		std::cout << out.x_ << "         " << out.y_ << "          " << out.color_ << std::endl;
	}
};