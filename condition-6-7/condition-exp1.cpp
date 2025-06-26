#include<iostream>
using namespace std;
int main(){
    system("cls");
    int code,qty;
    float total,payment ,dis;
    string name;
    double price;
    

    cout<<"=====> Input <======"<<endl;
    cout<<"Enter Name  : ";cin>>name;
    cout<<"Enter Code  : ";cin>>code;
    cout<<"Enter Qty   : ";cin>>qty;
    cout<<"Enter Price : ";cin>>price;
    // Formath 
    total = qty*price;
    
    
    // Condition
    if(total>=1 && total<=10){
        payment = total-(total*10)/100;
    }else if(total>=11 && total<=20){
        payment= total-(total*20)/100;
    }else if(total>=21 && total<=30){
        payment = total -(total*30)/100;
    }else if(total>=31 && total<=40){
        payment = total -(total*40)/100;
    }else if (total >=41 && total<=50){
        payment = total -(total*50)/100;
    }else if(total >=51 && total<=60){
        payment = total -(total*60)/100;
    }else if(total >60){
        payment = total -(total*70)/100;
    }else{
        cout<<"\033[0;31mNO DISCOUNT \033[0m\n"<<endl;
    }
    dis =total -payment;
    cout<<"======> Output <======"<<endl;
    cout<<"Name \t"<<"Code\t"<<"Qty\t"<<"Price\t"<<"Total\t"<<"Payment\t"<<"Discount\t"<<endl;
    cout<<name<<"\t"<<code<<"\t"<<qty<<"\t"<<price<<"$\t"<<total<<"$\t"<<payment<<"$\t"<<dis<<"$\t"<<endl;


    return 0;
}