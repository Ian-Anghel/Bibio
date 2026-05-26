#include "Author.h"
#include <iostream>

using namespace std;

Author::Author(const string& s, const string& n, const int yearOfBirth)
{
	m_surname = s;
	m_name = n;
	m_yearOfBirth = yearOfBirth;

	cout << "Author created named: ";
	PrintName();
}

Author::~Author()
{
	cout << "Author destroyed named: ";
	PrintName();
}

void Author::PrintName() const
{
	 cout << m_surname << " " << m_name << endl;
}