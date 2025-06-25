#include<iostream>
using namespace std;
int main(){
    int id,hour;
    char sex;
    string name;
    float salary,rate;
    double total;


    cout<<"==================Input======================"<<endl;
    cout<<"Enter Name   :";cin>>name;
    cout<<"Enter ID     :";cin>>id;
    cout<<"Enter Salary :";cin>>salary;
    cout<<"Enter Rate   :";cin>>rate;
    cout<<"Enter Hour   :";cin>>hour;

    total = rate*hour +salary;

    cout<<"===================Output===================="<<endl;
    cout<<"Name   :"<<name<<endl;
    cout<<"ID     :"<<id<<endl;
    cout<<"Salary :"<<salary<<endl;
    cout<<"Rate   :"<<rate<<endl;
    cout<<"Hour   :"<<hour<<endl;
    cout<<"Total  :"<<total<<endl;
    return 0;
}