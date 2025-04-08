// program to find max number among 3
#include<iostream>
using namespace std;
int main(){
    int num_1 , num_2 , num_3;
    cout<<"Enter First Number : ";
    cin>>num_1;
    cout<<"Enter Second Number : ";
    cin>>num_2;
    cout<<"Enter Third Number : ";
    cin>>num_3;

    if(num_1>num_2){
        if(num_1>num_3){
            cout<<"First number("<<num_1<<") is greater then Second number("<<num_2<<") and Third number("<<num_3<<") ";
           
        }
        else{
            cout<<"Third number("<<num_3<<") is greater then First number("<<num_1<<") and Second number("<<num_2<<") ";
        }

    }
    else{
        if(num_2>num_3){
            cout<<"Second number("<<num_2<<") is greater then First number("<<num_1<<") and Third number("<<num_3<<") ";
           
        }
        else{
            cout<<"Third number("<<num_3<<") is greater then First number("<<num_1<<") and Second number("<<num_2<<") ";
        }

    }
    return 0;

    
}