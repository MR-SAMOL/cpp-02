#include<iostream>
using namespace std;

//      លំហាត់អនុវត្តន៍ទី​ ២ មេរៀនទី១​ c++ programming

int main(){
    float s1,s2,s3,s4,s5;
    float total,average;

    cout<<"----------->Input<-----------"<<endl;
    cout<<"Enter The Score 1 :";cin>>s1;
    cout<<"Enter The Score 2 :";cin>>s2;
    cout<<"Enter The Score 3 :";cin>>s3;
    cout<<"Enter The Score 4 :";cin>>s4;
    cout<<"Enter The Score 5 :";cin>>s5;

    // Total Formath 
       total = s1+s2+s3+s4+s5;
    // Average Formath 
       average = total/5;   

    cout<<"----------->Output<-----------"<<endl;
    cout<<"TOTAL   :"<<total<<endl;
    cout<<"AVERAGE :"<<average<<endl;

    return 0;
}