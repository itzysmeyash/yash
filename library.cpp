#include<iostream>
using namespace std;

class Library {
public:
    void issueBook() {
        cout << "Book Issued\n";
    }

    void returnBook() {
        cout << "Book Returned\n";
    }

    void addBook() {
        cout << "Book Added\n";
    }

    void deleteBook() {
        cout << "Book Deleted\n";
    }

    void menu() {
        int choice;
        do {
            cout << "\n1.Issue 2.Return 3.Add 4.Delete 5.Exit\n";
            cin >> choice;

            switch(choice) {
                case 1: issueBook(); break;
                case 2: returnBook(); break;
                case 3: addBook(); break;
                case 4: deleteBook(); break;
            }

        } while(choice != 5);
    }
};

int main() {
    Library obj;
    obj.menu();
}
