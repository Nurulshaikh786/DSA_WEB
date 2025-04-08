// write a program to check you are pass or not passing marks(35)
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your Marks : ";
    cin>>marks;

    if(marks>0 && marks<=100){
        if(marks>35){
            cout<<"You are pass with "<<marks<<" Marks";
        }
        else{
            cout<<"Sorry!!! You are fail because marks is less then 35";
        }
    }
    else{
        cout<<"Enter Valid Marks (0-100)"<<endl;
    }
    return 0;
}