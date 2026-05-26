#include "Library.h"

#include <format>
#include <iostream>
#include <utility>
#include "Book.h"

Library::Library(const std::vector<Book*>& books)
{
    m_books = books;
}
Library::Library(std::string name)
{
    m_name = std::move(name);
}
Library::~Library()
{
    std::cout << m_name << "Deleted" << std::endl;
}

void Library::Addbook(Book* newBook)
{
    m_books.push_back(newBook);
}
void Library::PrintBooks() const
{
    std::cout << m_name << " Books:" << std::endl;
    int i = 0;
    for (const Book* book : m_books)
    {
        i++;
        std::cout << "Book: " << i << std::endl;
        Book::PrintBook(book);
    }
}
