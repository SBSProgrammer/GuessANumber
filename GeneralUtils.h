#pragma once
#include <iostream>
#include <string>

namespace GeneralUtils
{
	void print(std::string text, bool endline = true)
	{
		if (endline) std::cout << text << std::endl;
		else std::cout << text;
	}

	std::string input()
	{
		std::string temp;
		std::cin >> temp;
		return temp;
	}
}
