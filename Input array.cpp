//entering values of a 3D array
#include <iostream>
using namespace std;
int i,j,k;
int main(){
	//3D array declaration
	int a[2][3][3];
	cout<<"Bro enter values of your choice"<<endl;
	//use of nested for loop
	//accessing the block of the matrice
	for(int i=0; i<2; i++)
	{
		//use of nested for loop
		//accessing the row
		for(int j=0; j<=2; j++)
		{
			//use of nested for loop
			//accessing the column
			for(int k=0; k<3; k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
cout<<"Below are the values of your choice"<<endl;
for(int i=0; i<2; i++)
{
	for(int j=0; j<=2; j++)
	{
		for(int k=0; k<3; k++)
		{
			cout<<"["<<i<<"]["<<j<<"]["<<k<<"]="<<
			a[i][j][k]<<endl;
		}
	}
}
return 0;
}
