#include <iostream>
using namespace std;
int main(){
   int i=1,sum=0; 
   while(i<=16) 
   {
      cout<<i<<endl; i++;
      sum=sum+i;
   }
   cout<<"Sum of integers = "<<sum;
   return 0;
}