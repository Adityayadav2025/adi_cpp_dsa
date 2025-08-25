#include<bits/stdc++.h>
#include<iostream>
using namespace std;          //header
class Node {                 //mover   
    public:                   //temp
    int data;
    Node*next;
    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
    public:    
     Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node* mover =head;
    for (int i = 0; i < arr.size(); i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

    

}
int main()
{
    vector<int>arr={1292,3,4,5,6};
    Node*head=convertArr2LL(arr);
    cout<<head->data;

return 0;
}