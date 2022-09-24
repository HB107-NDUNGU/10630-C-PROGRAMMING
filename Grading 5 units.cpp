#include<iostream>
using namespace std;
int main()
{
	int math, eng, french, sci, cre;
	float sum=0,avg;
	avg=math+eng+french+sci+cre/5;
	cout<<"Enter marks for 5 units"<<endl;
	cin>>math>>eng>>french>>sci>>cre;
	avg=math+eng+french+sci+cre/5;
	{
		sum=math+eng+french+sci+cre;
	}
	cout<<"\n Total marks of the student ="<<sum;
	avg=sum/5;
	cout<<"\n Average = "<<avg;
	cout<<"\n Grade = ";
	if(avg>=70&&avg<=100)
	{
		cout<<"Result: Grade A";
	}
	else if(avg>=60&&avg<=69)
	{
		cout<<"Result: Grade B";
	}
	else if(avg>=50&&avg<=59)
	{
		cout<<"Result: Grade C";
	}
	else if(avg>=40&&avg<=49)
	{
		cout<<"Result: Grade D";
	}
	else if(avg>=0&&avg<40)
	{
		cout<<"Result: FAIL";
	}
	
	return 0;
	
}