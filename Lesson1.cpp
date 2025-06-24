#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
	int x,y;
     cout<<"-------------------ETEC Center------------------"<<endl;
     cout<<setw(10)<<"ID :"<<"101"<<endl;
     cout<<setw(10)<<"Name :"<<"Tida"<<endl;
     cout<<setw(10)<<"Gender :"<<"Female"<<endl;
     cout<<setw(10)<<"Address :"<<"Phnom Penh"<<endl;
     cout<<"------------------------------------------------"<<endl;
	
	cout<<"20 + 10 ="<<20+10<<endl;
	cout<<"20 - 10 ="<<20-10<<endl;
	cout<<"20 * 10 ="<<20*10<<endl;
	cout<<"20 / 10 ="<<20/10<<endl;
	cout<<"20 % 10 ="<<20%10<<endl;
	
	cout<<"Input Number !"<<endl;
	cout<<"Input X :";cin>>x;
	cout<<"Input y :";cin>>y;
	 
	 cout<<"Output Answer !"<<endl;
	 cout<<" X + Y ="<<x+y<<endl;
	 cout<<" X - Y ="<<x-y<<endl;
	 cout<<" X * Y ="<<x*y<<endl;
	 cout<<" X / Y ="<<x/y<<endl;
	 cout<<" X % Y ="<<x%y<<endl;
	
	return 0;
}
