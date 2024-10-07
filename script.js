document.addEventListener("DOMContentLoaded", () => {
    const bookListDiv = document.getElementById("book-list");
    // Simulate fetching available books from the backend
    const availableBooks = [
        { title: "1984", author: "George Orwell" },
        { title: "To Kill a Mockingbird", author: "Harper Lee" },
    ];

    availableBooks.forEach(book => {
        const bookElement = document.createElement("div");
        bookElement.textContent = `${book.title} by ${book.author}`;
        bookListDiv.appendChild(bookElement);
    });
});
