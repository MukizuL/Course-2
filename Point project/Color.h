#pragma once
#include "main.h"

enum color{red, blue ,green};

std::string to_str(color c);
color to_enum(const std::string& c);