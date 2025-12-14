#include <iostream>
#include <queue>
#include <string>
using namespace std;

class BookRequestQueue {
private:
    queue<string> q;

public:
    // Add student request to queue
    void requestBook(const string& student) {
        q.push(student);
        cout << student << " added to queue\n";
    }

    // Serve the next student in queue
    void serveRequest() {
        if (q.empty()) {
            cout << "No pending requests\n";
            return;
        }
        cout << "Serving: " << q.front() << endl;
        q.pop();
    }

    // Display all requests
    void showQueue() {
        queue<string> temp = q; // copy queue
        cout << "\n===== REQUEST QUEUE =====\n";
        while (!temp.empty()) {
            cout << temp.front() << endl;
            temp.pop();
        }
    }
};

int main() {
    BookRequestQueue brq;

    brq.requestBook("Alice");
    brq.requestBook("Bob");
    brq.showQueue();

    brq.serveRequest();
    brq.showQueue();

    brq.serveRequest();
    brq.serveRequest(); // test empty

    return 0;
}
