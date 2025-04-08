// program to check the number is divisible by 5 or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    if(num%5==0){
        cout<<"Entered number("<<num<<") is divisible by 5";
    }
    else{
    cout<<"Enterd number("<<num<<") is not divisible 5";
    }
    return 0;
}