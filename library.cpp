#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string name;
    bool issued;

    void addBook() {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Name: ";
        cin >> name;
        issued = false;
    }

    void issueBook() {
        if (!issued) {
            issued = true;
            cout << "Book Issued\n";
        } else {
            cout << "Already Issued\n";
        }
    }

    void returnBook() {
        if (issued) {
            issued = false;
            cout << "Book Returned\n";
        } else {
            cout << "Not Issued\n";
        }
    }
};

int main() {
    Book b;
    b.addBook();
    b.issueBook();
    b.returnBook();
    return 0;
}
