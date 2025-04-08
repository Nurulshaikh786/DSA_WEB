// Wright a programm to didplay the number is positive, negative or neutral

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    if(num>0){
        cout<<"Entered Number("<<num<<") is Posiive";
    }
    else if(num<0){
        cout<<"Entered Number("<<num<<") is Negative";
    }
    else{
        cout<<"Entered Number(0) is Neutral";
    }
    return 0;
}