#include "book_list.hpp"
#include "book_queue.hpp"
#include "undo_redo.hpp"
#include <iostream>
using namespace std;

int main() {
    BookList list;
    BookRequestQueue queue;
    UndoRedo ur;

    cout << "===== LIBRARY MANAGEMENT SYSTEM TEST =====\n\n";

    // ----------- LINKED LIST TEST -----------
    list.addBook(101, "DSA", "Sahni");
    list.addBook(102, "AI", "Russell");
    ur.addAction("Added book 101");
    ur.addAction("Added book 102");

    list.showBooks();

    // ----------- QUEUE TEST -----------------
    queue.requestBook("Ali");
    queue.requestBook("Ayesha");
    queue.showRequests();
    queue.serveRequest();

    // ----------- STACK UNDO/REDO TEST --------
    ur.undo();
    ur.redo();

    return 0;
}
