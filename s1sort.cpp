#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void selectionsort(vector<int> &arr){
    int n=arr.size();
    for (int i = 0; i < n-1; i++){
        int min_index=i;
        for (int j = i+1; j < n; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
        
    }
    
}
void printarray(vector<int>&arr){
for(int &val: arr){
    cout<<val<<" ";

}
cout<<endl;
    
}

int main(){
    vector<int>arr={1,2,3,4,4,5,6,7,7,8};
    cout<<"original array\n";
    printarray(arr); 

    selectionsort(arr);

    cout << "Sorted array: ";
    printarray(arr);

    return 0;
}