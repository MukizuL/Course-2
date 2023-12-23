
#include "Color.h"

std::string to_str(const color c)
{
	switch(c)
	{
	case red:
		return "red";
	case blue:
		return "blue";
	case green:
		return "green";
	}
	return "";
}

color to_enum(const std::string& c)
{
	static const std::map<std::string, enum color> conversion_table
	{
		{ "red", red },
		{ "blue", blue },
		{ "green", green }
	};

	const color a = conversion_table.at(c);
	return a;
}