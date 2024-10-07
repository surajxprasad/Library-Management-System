#include "Library.h"

void Library::addBook(const std::string &title, const std::string &author) {
    books.push_back(Book(title, author));
}

void Library::removeBook(const std::string &title) {
    books.erase(std::remove_if(books.begin(), books.end(),
        [&title](Book &b) { return b.title == title; }), books.end());
}

void Library::borrowBook(const std::string &title) {
    for (auto &book : books) {
        if (book.title == title && book.isAvailable) {
            book.isAvailable = false;
            break;
        }
    }
}

void Library::returnBook(const std::string &title) {
    for (auto &book : books) {
        if (book.title == title && !book.isAvailable) {
            book.isAvailable = true;
            break;
        }
    }
}

std::vector<Book> Library::listAvailableBooks() {
    std::vector<Book> availableBooks;
    for (const auto &book : books) {
        if (book.isAvailable) {
            availableBooks.push_back(book);
        }
    }
    return availableBooks;
}
