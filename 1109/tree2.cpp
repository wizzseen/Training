#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

int maxDepth(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int pp = max(maxDepth(root->left), maxDepth(root->right));
    return pp + 1;
}

int main() {
    Node* root = new Node(12);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left=new Node(6);
    root->left->right->right=new Node(7);
    cout <<maxDepth(root) << endl;
    return 0;
}

