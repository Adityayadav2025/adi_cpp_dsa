/*write a 32 bit compiler to understand the concept of array storage size of word 
*/
#include<iostream>
using namespace std;
int main(){
    int arr1[5],arr2[2][3],arr3[2][2][2];
    cout<<"word size: "<<sizeof(int)<<"bytes\n\n";
    cout<<"addres of arr1[3]"<<&arr1[3]<<"theoriticsl"<<(int*)arr1+3<<"\n";
    cout<<"addres of arr2[1][2]"<<&arr2[1][2]<<"theoritical"<<(int*)arr2+(1*3+2)<<"\n";
    cout<<"address of arr3[1][1][0]"<<&arr3[1][1][0]<<"theoritical"<<(int*)arr3+(1*2*2+1*2+0)<<"\n";
return 0 ;
}