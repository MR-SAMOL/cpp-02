// Topic score and age of the student

#include<iostream>
using  namespace std;
int main(){
    // vriable
    int age;
    float score;
    // statement
    cout<<"Enter Your Age   :";cin>>age;
    cout<<"Enter Your Score :";cin>>score;
    // condition
    if(age>=18){
        cout<<"You are Adults !"<<endl;
    }else if(age<18){
        cout<<"You are Chidhood!"<<endl;
    }
    if(score>=90 & score<=100){
        cout<<"Greate !!"<<endl;
    }else if(score>=60 & score<=80){
        cout<<"Good "<<endl;
    }else if(score>=50){
        cout<<"must to study hard !"<<endl;
    }else {
        cout<<"\033[0;31m Fall !! \033[0m"<<endl;
    }

    return 0;
}