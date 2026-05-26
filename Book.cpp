#include "Book.h"

Book::Book(std::string title, Author* author, unsigned int pagesAmount)
{
	m_title = title;
	m_author = author;
	m_pagesAmount = pagesAmount;
}