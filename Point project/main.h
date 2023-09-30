#pragma once
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

enum color{red, blue ,green};

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
		int color_id;
		infile >> x_ >> y_ >> color_id;
		color_ = static_cast<color>(color_id);
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
		switch(color_)
		{
		case red:
			return "red";
			break;
		case blue:
			return "blue";
			break;
		case green:
			return "green";
			break;
		}
		return {};
	}

	void print_data() const
	{
		std::string c;
		switch(color_)
		{
		case red:
			c = "red";
			break;
		case blue:
			c = "blue";
			break;
		case green:
			c = "green";
			break;
		}
		std::cout << std::setw(20) << x_ << std::setw(20) << y_ << std::setw(20) << c << std::endl;
	}
};
