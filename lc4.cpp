//median of the sorted array 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int>v1,v2;
    v1.push_back(1);
    v1.push_back(3);
    v2.push_back(2);
    vector<int>result=v1;
    result.insert(result.end(),v2.begin(),v2.end());
    sort(result.begin(),result.end());

for(int x:result){
    cout<<x<<" ";
}
cout<<endl;
int n=result.size();
double median;
if(n%2==1){
    median=result[n/2];

}else{
    median=(result[n/2]-1+result[n/2])/2.0;
}
cout<<"median "<<median<<"\n";


}