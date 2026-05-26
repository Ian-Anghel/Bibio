#include "Book.h"

#include <iostream>
#include <ostream>

Book::Book(const std::string& title, Author* author, const unsigned int pagesAmount)
{
	m_title = title;
	m_author = author;
	m_pagesAmount = pagesAmount;
}
Book::Book()
{
	m_title = "inconue";
	m_author = nullptr;
	m_pagesAmount = 0;
}

Book::Book(const Book& book)
{
	m_title = book.m_title + " (copy)";
	m_author = book.m_author;
	m_pagesAmount = book.m_pagesAmount;
}
void Book::PrintBook(const Book* book)
{
	std::cout << book->m_title << std::endl;
	std::cout << book->m_author->m_name << " " << book->m_author->m_surname << " " << book->m_author->m_yearOfBirth << std::endl;
	std::cout << book->m_pagesAmount << std::endl;
	std::cout << std::boolalpha << book->m_borrowed << std::endl;
}
Book::~Book()
{
	std::cout << m_title << "Deleted" << std::endl;
}
void Book::BorrowBook()
{
	if (m_borrowed){return;}
	this->m_borrowed = true;
}