#include<iostream>
using namespace std;
int main(){
    system("cls");
    int a,b;
    cout<<"     Enter Your Number   "<<endl;
    cout<<"Enter A :";cin>>a;
    cout<<"Enter B :";cin>>b;
    
    cout<<"=============Output=============="<<endl;
    if(a>b){
        cout<<"A is bigger than B ! "<<endl;
    }
    if(a<b){
        cout<<"A is small than B ! "<<endl;
    }
     if(a==b){
            cout<<"A = B"<<endl;
        }
    return 0;
}

