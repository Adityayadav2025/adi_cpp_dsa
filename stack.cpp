// simple stack question in cpp 
#include<iostream>
using namespace std;
class Stack{
    public:
    int arr[5];
    int top;
    public:
    Stack(){
        top=-1;

    }
    bool isFull(){
        return top==5-1;
    }
    bool isEmpty(){
        return top==-1;

    }
    void push(int value){
        if(isFull()){
            cout<<"Stack is Overflowed \n";
        }
        else{
            arr[++top]=value;
            cout<<value<<"piushed into the stack \n";
        }


    }
    void pop(){
        if(isEmpty()){
            cout<<"stack underflow \n";
        }
        else{
            cout<<arr[--top]<<" popped from the stack\n";
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"the stack is empty \n";

        }
        else{
            cout<<"the  stack elements are \n";
            for (int i = 0; i < top; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(90);
    s.push(16);// it is overflow 
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;

}
