// spore matrix in cpp




#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int mat[50][50];
    int nz=0;
    // input matrix
    for (int i = 0; i < row; i++){
        for (int j = 0; j< col; j++){
            cin>>mat[i][j];
            if(mat[i][j]!=0){
                nz++;
            }
        }
        
    }
    //print original matrix
    cout<<"MAT:\n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j< col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    // spare matrix representation

    int s[100][3];
    s[0][0]=row;
    s[0][1]=col;
    s[0][2]=nz;
    

    int k=1;
    for (int i = 0; i < row; i++){
        for (int j = 0; j< col; j++){
            if(mat[i][j]!=0){
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=mat[i][j];
                k++;
            }
        }
    }


    // display the spare matrix;
    cout<<"\n";
    for (int i = 0; i <=nz; i++){
        cout<<s[i][0]<<" "<<s[i][1]<<" "<<s[i][2]<<endl;

    }
    
return 0 ;
}