
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number you wants to reverse \n";
    int num,reversed=0;
    cin>>num;
    int original =num;
    while(num>0){
    int digits=num%10;
    reversed=reversed*10+digits;
    num=num/10;
    }
    cout<<"the reversal of the "<<original<<" is" <<reversed<<"\n";
return 0 ;
}