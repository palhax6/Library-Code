#include "Library.hpp"
#include <iostream>

using namespace std;

int main() {
Library myLibrary;
myLibrary.addBook("The Great Gatsby",300);
myLibrary.addBook("1984", 400);
myLibrary.addBook("To Kill a Mockingbird", 350);
cout << "Current library budget is: " << libraryBudget << endl;
myLibrary.listBooks();
myLibrary.reserveBook("1984");
myLibrary.borrowBook("To Kill a Mockingbird");
myLibrary.getTotalBorrowedBooks();
}