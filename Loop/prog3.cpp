#include<iostream>
using namespace std;
int main(){
    int i ,n;
    cout<<"Enter a number : ";
    cin>>n;

   i=1;
    cout<<"The factors of "<<n<<" is : ";
    while(i<=n){
        if(n%i==0){
           cout<<i<<" , ";
        }
        i++;
    }
    return 0;

}