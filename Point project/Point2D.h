#pragma once
#include "Color.h"
#include "main.h"

class Point2D
{
private:
	double x_;
	double y_;
	color color_;

public:
	Point2D()
	{
		x_ = 0;
		y_ = 0;
		color_ = red;
	}

	explicit Point2D(std::istream& infile)
	{
		std::string c;
		infile >> x_ >> y_ >> c;
		color_ = to_enum(c);
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
		return to_str(color_);
	}

	void print_data() const
	{
		std::cout << std::setw(20) << x_ << std::setw(20) << y_ << std::setw(20) << to_str(color_) << std::endl;
	}
};