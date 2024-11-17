#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* aa; 
    Node* bb; 

    Node(int val) {
        data = val;
        aa = nullptr;
        bb = nullptr;
    }
};

void printRightView(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int count = q.size();
        Node* cc = nullptr;

        for (int i = 0; i < count; ++i) {
            Node* aa = q.front();
            q.pop();

            cc = aa;

            if (aa->aa != nullptr) q.push(aa->aa);
            if (aa->bb != nullptr) q.push(aa->bb);
        }

        cout << cc->data << " ";
    }
}

int main() {
    Node* root = new Node(1);
    root->aa = new Node(2);
    root->bb = new Node(3);
    root->aa->aa=new Node(4);
    root->aa->bb=new Node(5);
    printRightView(root); 
    return 0;
}

