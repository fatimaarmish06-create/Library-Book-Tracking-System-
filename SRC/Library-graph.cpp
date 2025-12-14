#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;    // Size of graph (number of nodes)

    vector<vector<int>> adj(n);  // Now NO ERROR

    // Add some edges
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);

    // Print graph
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int node : adj[i]) {
            cout << node << " ";
        }
        cout << endl;
    }
}
