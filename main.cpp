#include <iostream>
#include <string>
#include <vector>
#include "Author.h"
#include "Book.h"
using namespace std;
vector<Author*> g_authors;
int main()
{
	g_authors.reserve(10);
	g_authors.push_back(new Author("George", "Martin", 1958));
	g_authors.push_back(new Author("George", "Orwell", 1928));
	g_authors.push_back(new Author("Joseph", "Tolkien", 1908));
	g_authors.push_back(new Author("Johanne", "Rowling", 1968));
	g_authors.push_back(nullptr);
	const Book* newBook = new Book("Hello World!", g_authors[0], 800);
	while (!g_authors.empty())
	{
		if (g_authors.back() != nullptr)
			delete (g_authors.back());
		g_authors.pop_back();
	}

	delete newBook;

	return 0;
}