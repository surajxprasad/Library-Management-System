#include <iostream>
#include "Library.h"

int main() {
    Library library;
    library.addBook("1984", "George Orwell");
    library.addBook("To Kill a Mockingbird", "Harper Lee");

    std::cout << "Available books:\n";
    auto availableBooks = library.listAvailableBooks();
    for (const auto &book : availableBooks) {
        std::cout << book.title << " by " << book.author << "\n";
    }

    library.borrowBook("1984");
    std::cout << "\nAfter borrowing 1984:\n";
    availableBooks = library.listAvailableBooks();
    for (const auto &book : availableBooks) {
        std::cout << book.title << " by " << book.author << "\n";
    }

    return 0;
}
