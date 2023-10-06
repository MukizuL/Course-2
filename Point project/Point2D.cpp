#include "Point2D.h"

Point2D::Point2D()
{
	x_ = 0;
	y_ = 0;
	color_ = red;
}

Point2D::Point2D(std::istream& infile)
{
	std::string c;
	infile >> x_ >> y_ >> c;
	color_ = to_enum(c);
}

double Point2D::get_x() const
{
	return x_;
}

double Point2D::get_y() const
{
	return y_;
}

std::string Point2D::get_color() const
{
	return to_str(color_);
}

void Point2D::print_data() const
{
	std::cout << std::setw(20) << x_ << std::setw(20) << y_ << std::setw(20) << to_str(color_) << std::endl;
}