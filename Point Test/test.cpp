#include "pch.h"
#include "Point project/Color.h"
#include "Point project/Color.cpp"
#include "Point project/open_file.h"
#include "Point project/open_file.cpp"
#include "Point project/Point2D.h"
#include "Point project/Point2D.cpp"
#include "Point project/read_file.h"
#include "Point project/read_file.cpp"

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
    point.print_data();
    std::cout.rdbuf(old_stdout); // Restore cout

	const std::string expected_output = "                   3                   4               green\n";
    EXPECT_EQ(output.str(), expected_output);
}