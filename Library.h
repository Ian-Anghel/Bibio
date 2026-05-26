#pragma once
#include <vector>
#include "Book.h"

class Library {
public:
    std::string m_name;
    std::vector<Book*> m_books;
    explicit Library(const std::vector<Book*>& books);
    explicit Library(std::string name);
    ~Library();
    void Addbook(Book* newBook);
    void PrintBooks() const;
};




