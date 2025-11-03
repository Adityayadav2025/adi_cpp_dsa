#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    
    int arr[8]={1,2,3,4,5,6,67,900};
        for(int i=0;i<7;i++){
            int index=i;
            for (int j = i+1; j <8; j++){
                if (arr[j]<arr[index])
                    index=j; 
            }
            swap(arr[i],arr[index]);
        }
    for (int i = 0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
        
    
    return 0 ;
}