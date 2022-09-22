//program to check voter eligibility

#include <iostream>


using namespace std;

int main() 

{

    int age;

    cout<<"Enter your age"<<endl;

    cin>>age;

    
    if(age>=18)

    {
        cout<<"You are eligible to vote"<<endl;

    }

    else

    {

    cout<<"Not eligible";

    }

    return 0;

}