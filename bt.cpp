#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
    int data;
 struct Node  *left,*right;
    Node(int v){
        data=v;
        left=nullptr;
        right=nullptr;
    }

};
void inorder(struct Node *node){
    if(node==nullptr){
        return;
    }
    inorder(node->left);
    //print the data
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(struct Node *node){
    if(node==nullptr){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    //print the data
    cout<<node->data<<" ";
}
void preorder(struct Node *node){
    if(node==nullptr){
        return;
    }
    //print the data
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    postorder(root);
return 0 ;
}