// linear searching
#include<iostream>
using namespace std;
int linear_searching(int arr[],int n,int target){
    for (int i = 0; i < n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int n,target;
    int arr[n];
    cout<<"enter the numeber of elements in array \n";
    cin>>n;
    cout<<"enter "<<n<<" number in the array\n";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"enter the target\n";
    cin>>target;
    int result=linear_searching(arr,n,target);
    if(result==-1){
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }    
return 0 ;
}