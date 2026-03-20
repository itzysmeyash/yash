#include<iostream>
using namespace std;

class Library {
public:
    void addBook() {
        cout << "Book Added\n";
    }

    void issueBook() {
        cout << "Book Issued\n";
    }

    void returnBook() {
        cout << "Book Returned\n";
    }

    void deleteBook() {
        cout << "Book Deleted\n";
    }
};

int main() {
    Library lib;
    int choice;

    while(true) {
        cout << "\n1.Add 2.Issue 3.Return 4.Delete 5.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1: lib.addBook(); break;
            case 2: lib.issueBook(); break;
            case 3: lib.returnBook(); break;
            case 4: lib.deleteBook(); break;
            case 5: return 0;
            default: cout << "Invalid";
        }
    }
}
