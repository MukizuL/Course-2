#include "pch.h"
#include <Point Project\main.h>

TEST(Point2DTest, DefaultConstructor)
{
	const Point2D point;
	EXPECT_EQ(point.get_x(), 0.0);
	EXPECT_EQ(point.get_y(), 0.0);
	EXPECT_EQ(point.get_color(), "red");
}

TEST(Point2DTest, ParametrisizedConstructor_Positive)
{
	std::istringstream input("25.7 65.22 blue");
	const Point2D point(input);
	EXPECT_EQ(point.get_x(), 25.7);
	EXPECT_EQ(point.get_y(), 65.22);
	EXPECT_EQ(point.get_color(), "blue");
}

TEST(Point2DTest, ParametrisizedConstructor_Negative)
{
	std::istringstream input("-25.7 -65.22 green");
	const Point2D point(input);
	EXPECT_EQ(point.get_x(), -25.7);
	EXPECT_EQ(point.get_y(), -65.22);
	EXPECT_EQ(point.get_color(), "green");
}

TEST(Point2DTest, PrintData)
{
	std::istringstream input("3.0 4.0 green");
    const Point2D point(input);
	const std::stringstream output;
    std::streambuf* old_stdout = std::cout.rdbuf(output.rdbuf()); // Redirect cout to stringstream, old_stdout contains address for cout restoration
    Point2D::print_data(point);
    std::cout.rdbuf(old_stdout); // Restore cout

	const std::string expected_output = "                   3                   4               green\n";
    EXPECT_EQ(output.str(), expected_output);
}