/*Write a program to swap two numbers without using a third variable.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter  the first number you wnat to swap \n";
    cin>>a;
     cout<<"enter  the second number you wnat to swap \n";
    cin>>b;
    cout<<"befor swapping the number is a"<<a<< "and b is"<<b<<"\n"; 
    
    
    
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping the number is a"<<a<< "and b is"<<b<<"\n"; 



return 0 ;
}