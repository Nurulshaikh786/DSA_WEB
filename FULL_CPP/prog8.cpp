// Program to check wich number is max
#include<iostream>
using namespace std;
int main(){
    int num_1 , num_2;
    cout<<"Enter First Number : ";
    cin>>num_1;
    cout<<"Enter Second Number : ";
    cin>>num_2;

    if(num_1>num_2){
        cout<<"First number("<<num_1<<") is greater then Second number("<<num_2<<")";

    }
    else{
        cout<<"Second number("<<num_2<<") is greater then First number("<<num_1<<")";
    }
    return 0;

    
}