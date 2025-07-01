#include <vector>
#include <string>

using namespace std;

class Library {
private: 
vector<string> bookList;
static int totalBorrowedBooks;
mutable int reservedCount;
mutable vector<string> reservedBooks;

public:
void addBook (string title , double bookCost);
bool borrowBook (string title);
void listBooks();
Library();
int getTotalBorrowedBooks();
void reserveBook(string title) const;

};
extern double libraryBudget;