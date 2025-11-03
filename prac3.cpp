/* factorial programm using different approaches 
*/



#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number \n";
    cin>>num;
    int fact=1;
    for (int i = 1; i <=num; i++)
    {
        fact*=i;
    }
    
    cout<<"the factorial of "<<num<< "is "<<fact<<"\n";
return 0 ;
}