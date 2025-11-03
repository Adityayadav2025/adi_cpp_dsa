#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

Node* BinaryTree() {
    int x;
    cin >> x;
    if (x == -1)
        return NULL;

    Node* temp = new Node(x);
    cout << "Enter left child of " << x << " (-1 for no node): ";
    temp->left = BinaryTree();

    cout << "Enter right child of " << x << " (-1 for no node): ";
    temp->right = BinaryTree();

    return temp;
}
void preorder(Node *root){
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root){
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}
void postorder(Node *root){
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
    
}


int main() {
    cout << "Enter the root node (-1 for no node): ";
    Node* root = BinaryTree();
    cout << "Binary tree created successfully!" << endl;
    
    cout<<"preorder : \n";
    preorder(root);
    cout<<"inorder :\n";
    inorder(root);
    cout<<"postorder :\n";
    postorder(root);
    return 0;
}
