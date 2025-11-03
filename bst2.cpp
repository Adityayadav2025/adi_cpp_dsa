
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
Node*insert(Node*root,int target){
    if(!root){
        Node*temp=new Node(target);
        return temp;
    }
    if(target<root->data){
        root->left=insert(root->left,target);
    }
        else (target>root->data);
        root->right=insert(root->right,target);
    return root;
}
// searching in bst 
bool search(Node*root,int target){
    if(!root){
        return 0;
    }
    if(root->data==target){
        return 1;

    }
    if(root->data>target){
        return search(root->left,target);
    }
    else(root->data<target);
        return search(root->right,target); 
        return root;
}

int main(){
    int arr[]={3,7,8,9,1,2,56,10,3,6};
    Node *root=NULL;
    for(int i=0;i<=10;i++){
        insert(root,11);
    }
        cout<<"the element is inserted"<<endl;
        search(root,11);
}