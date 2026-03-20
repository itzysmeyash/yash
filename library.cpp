#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string name;
    string author;
};

vector<Book> library;

void addBook(string name, string author) {
    library.push_back({name, author});
    cout << "Book added successfully!\n";
}

void displayBooks() {
    for (auto b : library) {
        cout << b.name << " by " << b.author << endl;
    }
}

int main() {
    addBook("C++ Basics", "Bjarne");
    addBook("Web Dev", "John");
    
    displayBooks();
    return 0;
}
