#include "Library.hpp"
#include "removeElement.hpp"
#include <iostream>

using namespace std;
// important words
int Library::totalBorrowedBooks = 0;
double libraryBudget = 5000.0;
bool foundInBookList =false;
bool alreadyReserved =false;
//first function
void Library::listBooks() {
for (auto element: bookList) {
cout << element << endl;
}
}
//second function
void Library::addBook(string title, double bookCost) {
if (bookList.size() < 100) {
  bookList.push_back(title);
  libraryBudget = libraryBudget - bookCost;
  return;
}
else {
  cout << "Library is full!" << endl;
}
}
//third function
bool Library::borrowBook(string title) {
  for (auto element : bookList){
if (element == title) {
removeElement(bookList, element);
cout << "Book Borrowed!" << endl;
Library::totalBorrowedBooks ++; 
return true;
}
  }
  cout << "Book not found!" << endl;
  return false;
}
//4th function 
int Library::getTotalBorrowedBooks(){
  cout << "The total number of borrowed books is: " << totalBorrowedBooks << endl;
  return Library::totalBorrowedBooks;
}
//5th function
Library::Library() : reservedCount (0) {}
void Library::reserveBook(string title) const {
for (const auto& str : bookList) {
if (str == title) {
  foundInBookList= true;
  }
}
for (const auto& book : reservedBooks) {
    alreadyReserved=true;
  }

if (foundInBookList == true && alreadyReserved == false){
    reservedCount ++;
  cout << "Book Reserved: " << title << endl;
  cout << "Reserved Book Count: " << reservedCount << endl;
}
else {
   cout << "Book Not Reserved!" << endl;
}
}

