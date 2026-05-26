#include <iostream>
#include <string>
#include <vector>
#include "Author.h"
#include "Book.h"
#include "Library.h"
using namespace std;
vector<Author*> g_authors;
int main()
{
	g_authors.reserve(10);
	g_authors.push_back(new Author("George", "Martin", 1958));
	g_authors.push_back(new Author("George", "Orwell", 1928));
	g_authors.push_back(new Author("Joseph", "Tolkien", 1908));
	g_authors.push_back(new Author("Johanne", "Rowling", 1968));
	const auto newBook = new Book("alice!", g_authors[0], 800);
	const auto newBook1 = new Book("bob", g_authors[2], 800);
	const auto newBook2 = new Book(*newBook1);
	newBook1->BorrowBook();
	const auto library1 = new Library("my Libr");
	library1->Addbook(newBook);
	library1->Addbook(newBook1);
	library1->Addbook(newBook2);
	library1->PrintBooks();
	return 0;
}