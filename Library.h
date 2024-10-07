#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>

class Book {
public:
    std::string title;
    std::string author;
    bool isAvailable;

    Book(std::string t, std::string a) : title(t), author(a), isAvailable(true) {}
};

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const std::string &title, const std::string &author);
    void removeBook(const std::string &title);
    void borrowBook(const std::string &title);
    void returnBook(const std::string &title);
    std::vector<Book> listAvailableBooks();
};

#endif // LIBRARY_H
