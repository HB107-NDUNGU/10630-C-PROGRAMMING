//single class inheritance
#include<iostream>
using namespace std;
class radiographor{
	public:
	void xray(){
		cout<<"I can operate an x-ray machine"<<endl;
	}
	void ventilator(){
		cout<<"I can operate a ventilator"<<endl;
	}
};
//child class
class medicalengineer:public radiographor{
	public:
		void repaire(){
			cout<<"I offer repaire of medical machine "<<endl;
		}
};
int main()
{
	medicalengineer medicalengineer1;
	//calling members of the class
	medicalengineer1.xray();
	medicalengineer1.ventilator();
	//calling members of child class
	medicalengineer1.repaire();
	
	return 0;	
}
