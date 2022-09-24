#include<iostream>
using namespace std;
int main()
{
	float salary, netbonusamounttobegiven;
	int numberofYearsworkedforthecompany;
	cout<<"Enter your salary: ";
	cin>>salary;
	cout<<"Enter your number of years in the service: ";
	cin>>numberofYearsworkedforthecompany;
	if(numberofYearsworkedforthecompany>=6&&numberofYearsworkedforthecompany<=10)
	{netbonusamounttobegiven=0.08*salary;
	}
	else if(numberofYearsworkedforthecompany>10)
	{netbonusamounttobegiven=0.1*salary;
	}
	else
	{
		netbonusamounttobegiven=0.05*salary;
	}
	if(netbonusamounttobegiven>0&&salary>0)
	{
		cout<<"The net bonus amount: "<<netbonusamounttobegiven<<"\n\n";
	}
	else
	{
		cout<<"Wrong data\n\n";
	}
	system("pause");
	return 0;
}
