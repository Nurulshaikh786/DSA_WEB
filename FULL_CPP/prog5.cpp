// Program to check if number is even or odd
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    if(num%2==0){
        cout<<"Entered number("<<num<<") is even";
    }
    else{
    cout<<"Enterd number("<<num<<") is odd";
    }
    return 0;
}