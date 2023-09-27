#pragma once
#include <fstream>
#include <iomanip>
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

	explicit Point2D(std::istream& infile)
	{
		infile >> x_ >> y_ >> color_;
	}

	double get_x() const
	{
		return x_;
	}

	double get_y() const
	{
		return y_;
	}

	std::string get_color() const
	{
		return color_;
	}

	static void print_data(const Point2D& out)
	{
		std::cout << std::setw(20) << out.x_ << std::setw(20) << out.y_ << std::setw(20) << out.color_ << std::endl;
	}
};
