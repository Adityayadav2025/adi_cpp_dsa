/*
insert a new element in the bugineeing 
5--10--12--14--15--18
at a particular position at 3 5--10--105--12--14--15--18
at the end of the array 5--10--12--14--15--18--105


#include<iostream>
using namespace std;
int main(){
cout<<"enter the new elements in the beiggning \n";    
int ne;
cin>>ne;
int size=6;

int arr[10] ={5,10,12,14,15,18};

for (int i = size; i>0; i--)
{
    arr[i]=arr[i-1];
    arr[0]=ne;
    size++;
}
 cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
return 0;
}
*/
// for the middle 
#include<iostream>
using namespace std;
int main(){
cout<<"enter the new elements in the middle\n";    
int ne;
cin>>ne;
int size=6;
int post=3;//position

int arr[10] ={5,10,12,14,15,18};

for (int i = size; i>=post; i--)
{
    arr[i]=arr[i-1];
    arr[post-1]=ne;
    size++;
}
 cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
return 0;
}
