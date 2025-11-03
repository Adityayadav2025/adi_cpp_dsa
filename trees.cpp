#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node *left, *right ;
    Node(int value){
        data=value;
        left=right=NULL;
    
    }
};
int main(){
    int x,first ,second;
    queue<Node*>q;
    cout<<"enter the root node :"<<endl;
    cin>>x;
    Node *Root=new Node(x);
    q.push(Root);
    while (!q.empty()){
        Node *temp=q.front();
        q.pop();
        cout<<"enter the left child :\n";
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
        }
        cout<<"enter the right child :\n";
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
        }

        return 0 ;
    }
}