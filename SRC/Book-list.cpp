#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    Book* next;

    Book(int id_, const string& title_, const string& author_)
        : id(id_), title(title_), author(author_), next(NULL) {}

    string toString() const {
        stringstream ss;
        ss << "Book[id=" << id << ", title=" << title << ", author=" << author << "]";
        return ss.str();
    }
};

int main() {
    Book* b = new Book(101, "Algorithms", "Cormen");
    cout << b->toString() << endl;

    delete b;
    return 0;
}
