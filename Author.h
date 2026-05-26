#pragma once
#include <string>

class Author
{
public:
	Author(const std::string& s, const std::string& n, int yearOfBirth);
	~Author();
	void PrintName() const;
	std::string m_surname;
	std::string m_name;
	int m_yearOfBirth;
};

