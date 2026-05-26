#pragma once
#include <string>
#include "Author.h"

class Book
{
public:
	std::string m_title;
	Author* m_author;
	unsigned int m_pagesAmount;
	bool m_borrowed = false;

	Book(std::string title, Author* author, unsigned int pagesAmount);
};

