// Program to check the year is leab year or not
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Lets check wich year is leap year"<<endl;
    cout<<"Enter the year : ";
    cin>>year;

    if(year%4==0){
        cout<<"Entered year("<<year<<") is a leap year";
    }
    else{
    cout<<"Enterd year("<<year<<") is not a leap year";
    }
    return 0;
}