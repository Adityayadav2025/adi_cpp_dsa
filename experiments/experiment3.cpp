//addition of 2 variable polynomiaal using array
#include<iostream>
using namespace std;
int main(){
    int m,n=3;
    int poly1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int poly2[3][3]={{7,8,9},{4,5,6},{1,2,3}};
    int sum[3][3];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            sum[i][j]=poly1[i][j]+poly2[i][j];
        }
    }
     // Display sum as a single polynomial
    cout << "Sum of Polynomials:\n";
    bool firstTerm = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sum[i][j] != 0)
            {
                if (!firstTerm)
                    cout << " + ";
                cout << sum[i][j] << "x^" << i << "y^" << j;
                firstTerm = false;
            }
        }
    }
    cout << endl;

    return 0;
}
