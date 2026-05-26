#pragma once
#include <string>

class Author
{
public:
	std::string m_surname;
	std::string m_name;
	int m_yearOfBirth;
	Author(std::string s, std::string n, int yearOfBirth);
	~Author();

	void PrintName();
};

