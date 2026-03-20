#include<iostream>
using namespace std;

class Library {
public:
    void addBook() { cout<<"Book Added\n"; }
    void deleteBook() { cout<<"Book Deleted\n"; }
    void issueBook() { cout<<"Book Issued\n"; }
    void returnBook() { cout<<"Book Returned\n"; }
};

int main() {
    Library l;
    int ch;

    cout<<"1 Add\n2 Delete\n3 Issue\n4 Return\n";
    cin>>ch;

    switch(ch) {
        case 1: l.addBook(); break;
        case 2: l.deleteBook(); break;
        case 3: l.issueBook(); break;
        case 4: l.returnBook(); break;
        default: cout<<"Invalid";
    }
}
