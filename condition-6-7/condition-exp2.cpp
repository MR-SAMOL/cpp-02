#include<iostream>
using namespace std;
int main(){
        system("cls");
        float s1,s2,s3,s4,s5;
        char grade;
        double total,average;

        cout<<"====================DATA====================="<<endl;
        cout<<"AVERAGE = 90 - 100  GRADE [A]"<<endl;
        cout<<"AVERAGE = 80 - 90  GRADE  [B]"<<endl;
        cout<<"AVERAGE = 70 - 80  GRADE  [C]"<<endl;
        cout<<"AVERAGE = 60 - 70  GRADE  [D]"<<endl;
        cout<<"AVERAGE = 50 - 60  GRADE  [E]"<<endl;
        cout<<"AVERAGE = 0  - 50  GRADE  [F]"<<endl<<endl;

        cout<<"====================INPUT===================="<<endl;
        cout<<"Enter S1 : ";cin>>s1;
        cout<<"Enter S2 : ";cin>>s2;
        cout<<"Enter S3 : ";cin>>s3;
        cout<<"Enter S4 : ";cin>>s4;
        cout<<"Enter S5 : ";cin>>s5;
        // formath
        total =  s1+s2+s3+s4+s5;
        average = total/5;
        if(average>=91 && average<=100){
            grade='A';
        }else if(average>=81 && average<=90){
            grade='B';
        }else if(average>=71 && average<=80){
            grade='C';
        }else if(average>=61 && average<=70){
            grade= 'D';
        }else if(average>=51 && average<=60){
            grade='E';
        }else if(average>=0 && average<=50){
            grade='F';
        }

        cout<<"====================OUTPUT===================="<<endl;
        cout<<"S1\t"<<"S2\t"<<"S3\t"<<"S4\t"<<"S5\t"<<"TOTAL \t"<<"AVERAGE\t"<<"GRADE\t"<<endl;
        cout<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<s4<<"\t"<<s5<<"\t"<<total<<"\t"<<average<<"\t"<<grade<<"\t"<<endl;
    return 0;
}


