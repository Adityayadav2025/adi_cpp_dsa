/*write a program for verifying the Armstrong number ;
*/


#include<bits/stdc++.h>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number \n";
    cin>>num;

    // counting of the number ;
    int temp=num;
    int digits=log10(num)+1;
    while(temp>0){
        int d=temp%10;
        sum+=pow(d,digits);
        temp/=10;
    }

   if (sum==num){
    cout<<"the "<<num<<" is a armstrong number ";
   } 

else{
       cout<<"the "<< num <<" is not armstrong number ";
   }

return 0 ;
}