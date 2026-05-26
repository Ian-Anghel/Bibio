#pragma once
#include <string>
#include "Author.h"

class Book
{
public:
	Book(const std::string& title, Author* author, unsigned int pagesAmount);
	Book();
	Book(const Book& book);
	static void PrintBook(const Book* book);
	~Book();
	void BorrowBook();
	std::string m_title;
	Author* m_author;
	unsigned int m_pagesAmount;
	bool m_borrowed = false;
};

