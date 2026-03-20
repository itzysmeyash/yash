#include<iostream>
using namespace std;

class Library {
public:
    void issueBook() {
        cout << "Book Issued Successfully\n";
    }

    void returnBook() {
        cout << "Book Returned Successfully\n";
    }

    void addBook() {
        cout << "Book Added\n";
    }

    void deleteBook() {
        cout << "Book Deleted\n";
    }
};

int main() {
    Library lib;
    int choice;

    cout << "1. Issue\n2. Return\n3. Add\n4. Delete\n";
    cin >> choice;

    switch(choice) {
        case 1: lib.issueBook(); break;
        case 2: lib.returnBook(); break;
        case 3: lib.addBook(); break;
        case 4: lib.deleteBook(); break;
        default: cout << "Invalid Choice";
    }

    return 0;
}
