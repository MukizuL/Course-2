#define BOOST_TEST_MODULE mytests
#include <boost/test/included/unit_test.hpp>
#include "C:/Users/Lignition/Documents/GitHub/Course-2/Source.h"

BOOST_AUTO_TEST_CASE(Class_constructor)
{
	std::string subjects = "-5 -10 red 1234455 817346087 blue";
	std::ofstream out("test.txt");
	out << subjects;
	out.close();

	std::ifstream test;
	test.open("test.txt");
	Point2D point1 (test);
	Point2D point2 (test);
	BOOST_TEST(1 == 1);
	BOOST_TEST(true);
}