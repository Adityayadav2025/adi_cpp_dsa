#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end ){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1;
    int index=0;
    while (left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else{
             temp[index]=arr[right];
            index++,right++;

        }
    }
    //left array is not been fully empty
    
    while(left<=mid){
      temp[index]=arr[left];
            index++,left++;
            }
//right  array is not been fully empty
        while(right<=end){
            temp[index]=arr[right];
            index++,right++;
        }
        index=0;
        while (start<=end){
            arr[start]=temp[index];
            start++,index++;
        }
        


    }
    


void mergesort(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int mid=start+(end-start)/2;
    //left array
    mergesort(arr,start,mid);
    //right array
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int arr[9]={1,23,4,2,7,9,67,10,0};
    mergesort(arr,0,8);
    cout<<"the sorted array is ";;
    for (int i = 0; i < 9; i++){
        cout<<arr[i]<<" ";
    }
return 0 ;
}