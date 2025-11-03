#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    cout<<"enter the elements of the array\n";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for ( int i = n-1; i >0; i--){
        bool flag=false;
        for (int j = 0; j < i; j++){       
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=true; 
        }
    } 
    if(flag!=0);
    cout<<"the array is sorted \n";
    break;
}
cout<<"the sorted array is ";
for (int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

return 0 ;
}
    
    