//Program to check the person is eligible for voting or not
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your Age : ";
    cin>>age;
    if(age<18){
        cout<<"You are not eligible for voting because your age is "<<age<<" Which is less then 18";
    }
    else if(age==18){
        cout<<"Congratss!!! You are now eligible for voting ";
    }
    else{
        cout<<"You are eligible for voting";
    }
   
}