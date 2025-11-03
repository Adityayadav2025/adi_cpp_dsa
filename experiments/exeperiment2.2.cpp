//implement queue using stack 
#include<iostream>
using namespace std;
class queue{
    int q[100];
    int size;
    int front,rear;
    public:
    queue(int s=5){
    size=s;
    front,rear=-1;
}
bool isfull(){
    return rear=size-1;
}
bool isEmpty(){
    return front=-1;
}
int push(int val){
    if(isfull()){
        cout<<"the queue is already full\n";
    }
    else{
        if(front==-1){  
            front=0;
        }
        rear++;
        q[rear]=val;
        cout<<"the value "<< val<<"is psued in the queue\n";
       }
}void pop(){
    if(isEmpty()){
        cout<<"underflow condittion\n";
    }
    else{
        int el=q[front];
        front++;
        cout<<"the"<<el<<"is deleated from the queuen\n";
    }
}
void peek(){
    if(isEmpty()){
        cout<<"underflow condittion\n";
    }
    else{
        for (int i = front; i < rear; i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }

}

};
int main(){
 queue lq(5);
 
    lq.push(5);
    lq.push(10);
    lq.push(15);
    lq.peek();

    lq.pop();
    lq.peek();

    return 0;
}
