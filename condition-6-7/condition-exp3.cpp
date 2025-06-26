#include<iostream>
using namespace std;
int main(){
    system("cls");
    float nuse,ouse;
    float total,pay;
    cout<<"===============Table Of Value==============="<<endl;
    cout<<"|  Total use  1-10   Price   [350 R/KW]    |"<<endl;
    cout<<"|  Total use  11-20  Price   [450 R/KW]    |"<<endl;
    cout<<"|  Total use  21-30  Price   [550 R/KW]    |"<<endl;
    cout<<"|  Total use  31-40  Price   [650 R/KW]    |"<<endl;
    cout<<"|  Total use  41-50  Price   [750 R/KW]    |"<<endl;
    cout<<"|  Total use  51-60  Price   [850 R/KW]    |"<<endl;
    cout<<"|  Total use > 60    Price   [950 R/KW]    |"<<endl;
    cout<<"============================================"<<endl;

    cout<<"=================Input Value================"<<endl;
    cout<<"Enter ouse  :";cin>>ouse;
    cout<<"Enter nuse  :";cin>>nuse;
    
    // ouse = ប្រាក់ដើមខែ
    // nuse = ប្រាក់ចុងខែ
    total= nuse - ouse;
    if(total >=1 && total <=10){
        pay= total*350;
    }else if(total >=11 && total <=20){
        pay = 10*350+(total -10)*450;
    }else if(total >=21 && total <=30){
        pay = 10*350 + 20*450 +(total-20)*550;
    }else if(total >=31 && total <=40){
        pay = 10*350 + 20*450 +30*550+(total -30)*650;
    }else if(total >=41 && total <=50){
        pay = 10*350 + 20*450 + 30*550 + 40*650+(total -40)*750;
    }else if(total >=51 && total <=60){
        pay = 10 *350+ 20 *450+ 30*550+40*650+50*750+(total -50)*850;
    }else if(total>61){
        pay = 10 *350+ 20 *450+ 30*550+40*650+50*750+ 60*850+(total -60)*950;
    }

    cout<<"=================Output Vlaue================"<<endl;
    cout<<"TOTAL   :"<<total<<"\tR"<<endl;
    cout<<"PAYMENT :"<<pay<<"\tR"<<endl;


    return 0;
} 