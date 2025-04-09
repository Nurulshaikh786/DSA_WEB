#include<iostream>
using namespace std;
int main(){
    int n , i , fact;
    cout<<"Enter a number to check its factorial value : ";
    cin>>n;
    i=n;
    fact=1;
    while(i>=1){

        fact=fact*i;
        i--;
    }
    cout<<"Factorial of "<<n<<" is : "<<fact;
}
