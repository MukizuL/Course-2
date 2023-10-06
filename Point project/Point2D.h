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
	Point2D();

	explicit Point2D(std::istream& infile);

	double get_x() const;

	double get_y() const;

	std::string get_color() const;

	void print_data() const;
};