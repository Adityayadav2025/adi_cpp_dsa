#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    int height ;   
    Node(int k){
        key=k;
        left=nullptr;
        right=nullptr;
        height=1;
    }
};
//get the height of the tree
int height(Node *N){
    if(N==nullptr)
    return 0;
    return N->height;
}
// function for insertion 
Node *insert(Node* node,int key){
    if(node==nullptr)
    return new Node(key);
    if(key<node->key)
    node->left=insert(node->right,key);
    else if(key>node->key)
    node->right=insert(node->right,key);
    return node;
    
    // Update height 
    node->height = 1 + max(height(node->left),
    height(node->right)); 
    
};
    //get balance
    int getbalance(Node *N){
        if(N==nullptr)
        return 0;
        return height(N->height)-height(N->right);
    }
    Node *rightrotate(Node *y){
        Node*x=y->left;
        Node *t2=x->right;
        x->right=y;
        y->left=t2;
        y->height = 1 + max(height(y->left), 
        height(y->right)); 
        x->height = 1 + max(height(x->left), 
        height(x->right)); 
        return x; 
    } 

  //left rotate 
  Node*leftrotate(Node *x){
    Node *y=x->right;
    Node*t2=y->left;
    y->left=x;
    x->right=t2;
     x->height = 1 + max(height(x->left), 
                        height(x->right)); 
    y->height = 1 + max(height(y->left), 
                        height(y->right)); 
    return y;                    

}

    //  left right case
    if(balance>1 && key >Node->left->key){
        Node->left =leftrotate(node->left);
        return rightrotate(node);
    }
    // right left case
    if(balance<-1 && key <node->right->key){
        node->right=rightrotate(node->right);
        return leftrotate(node);
    }
    return node;





    int main(){
        Node *root=nullptr;
        root=insert(root,10);
        root=insert(root,20);
        root=insert(root,30);
        root=insert(root,40);
        root=insert(root,50);
        root=insert(root,25);
        return 0 ;
}