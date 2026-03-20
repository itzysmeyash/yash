#include <iostream>
using namespace std;

class Library {
public:
    void addBook() {
        string title;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Book Added Successfully!\n";
    }

    void deleteBook() {
        int id;
        cout << "Enter Book ID to Delete: ";
        cin >> id;
        cout << "Book Deleted Successfully!\n";
    }

    void issueBook() {
        int id;
        cout << "Enter Book ID to Issue: ";
        cin >> id;
        cout << "Book Issued Successfully!\n";
    }

    void returnBook() {
        int id;
        cout << "Enter Book ID to Return: ";
        cin >> id;
        cout << "Book Returned Successfully!\n";
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Delete Book\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: lib.addBook(); break;
            case 2: lib.deleteBook(); break;
            case 3: lib.issueBook(); break;
            case 4: lib.returnBook(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while(choice != 5);

    return 0;
}
