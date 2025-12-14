#include <iostream>
#include <string>
using namespace std;

struct CategoryNode {
    string category;
    CategoryNode* left;
    CategoryNode* right;

    // Constructor
    CategoryNode(string c) {
        category = c;
        left = right = nullptr; // use nullptr (or NULL if using old compiler)
    }
};

class CategoryTree {
public:
    CategoryNode* root;

    // Constructor
    CategoryTree() {
        root = nullptr; // use nullptr instead of Null
    }

    // Insert a new category
    CategoryNode* insert(CategoryNode* node, string cat) {
        if (!node) return new CategoryNode(cat);

        if (cat < node->category)
            node->left = insert(node->left, cat);
        else
            node->right = insert(node->right, cat);

        return node;
    }

    // Inorder traversal
    void inorder(CategoryNode* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->category << endl;
        inorder(node->right);
    }
};

int main() {
    CategoryTree tree;

    tree.root = tree.insert(tree.root, "Science");
    tree.root = tree.insert(tree.root, "Math");
    tree.root = tree.insert(tree.root, "Literature");

    cout << "Categories Inorder:" << endl;
    tree.inorder(tree.root);

    return 0;
}
