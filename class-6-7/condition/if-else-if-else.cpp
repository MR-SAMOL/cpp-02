#include<iostream>
using namespace std;
int main(){
    // if else-if else
    system("cls");
    string name,gender;
    int id,age,num;

    cout<<"===> Input <==="<<endl;
    cout<<"Enter Name   :";cin>>name;
    cout<<"Enter ID     :";cin>>id;
    cout<<"Enter Age    :";cin>>age;
    cout<<"Enter Gender :";cin>>gender;
    cout<<"ENTER NUM !! :";cin>>num;

    cout<<"===> Output <==="<<endl;
    if(num!=0){
        cout<<"Name "<<name<<endl;
    }else if(num==0){
        cout<<"ID "<<id<<endl;
    }else{
        cout<<"Bye Bye "<<endl;
    }

 
    return 0;
}