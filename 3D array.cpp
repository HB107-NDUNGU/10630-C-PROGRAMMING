//An array to output a number in a matrice
#include<iostream>
using namespace std;
//variables for nested for loop
int i,j,k;
int main()
{
    //array declaration
    int a[2][3][3]={ {{1,2,3}, {4,5,6}, {7,8,9}},
                       {{10,11,12}, {13,14,15},{16,17,18}} };
//represent block
 for(i=0; i<2; i++)
 {
//represent rows
     for(j=0; j<2; j++)
     {
//reprent columns
         for(k=0; k<3; k++)
         {
             cout<<a[i][j][k]<<" ";
         }
     }
 }
     
 return 0;
}
