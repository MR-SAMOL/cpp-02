#include<iostream>
using namespace std;
int main(){
    system("cls");
	int op;
	cout<<"========Chosse Option==========="<<endl;
	cout<<"1. Book "<<endl;
	cout<<"2. Pen  "<<endl;
	cout<<"3. Bag "<<endl;
	cout<<"Enter Option :";cin>>op;
	switch(op){
		case 1:{
			cout<<"Book "<<endl;
			break;
		}
		case 2:{
			cout<<"Pen "<<endl;
			break;
		}
		case 3:{
			cout<<"Bag "<<endl;
			break;
		}
	}
	
	
	
	return 0;
}
