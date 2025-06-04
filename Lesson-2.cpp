// In this lesson we learn obout condition Statement
// Condition statement has 3 :
// 1. if
// 2. if else
// 3. if else-if else
// Now Let's to study together

#include<iostream>
using namespace std;
int main(){
    string Answer;
    cout<<"Do You Like C++ [Yes/No] :";cin>>Answer;
    // if  statement
    if(Answer!="No"){
        cout<<"Good Job !!"<<endl;
    }
    // if else
    string crush;
    cout<<"Do You have a crush!! [yes/no] :";cin>>crush;
    if(crush=="yes"){
        cout<<"Thank for Your Answer !!"<<endl;
    }else{
        cout<<"WHY!!"<<endl;
    }
    return 0;
}