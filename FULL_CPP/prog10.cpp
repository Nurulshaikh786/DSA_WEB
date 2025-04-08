// program to Determine the grade
//marks>90 grade A
//marks>80 && marks<=90 grade B
//marks>70 && marks<=80 grade C
//marks<=70  D
#include<iostream>
using namespace std;
int main(){
    int marks;

    cout<<"Enter your Marks : ";
    cin>>marks;

    if(marks>0 && marks<=100){
        if(marks>90){
            cout<<"Grade A";
        }
        else if(marks>80 && marks<=90){
            cout<<"Grade B";
        }
        else if(marks>70 && marks<=80){
            cout<<"Grade C";
        }
        else{
            cout<<"Grade D";
        }
    }
    else{
        cout<<"Enter Valid Marks (0-100)"<<endl;
    }
    return 0;
}

