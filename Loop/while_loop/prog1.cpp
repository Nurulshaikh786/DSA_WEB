#include<iostream>
using namespace std;
int main(){
    int n, i=1,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    while (i<=n)
    {
       sum+=i;
       i++;
    }
    cout<<"Sum of 1 to "<<n<<" is : "<<sum;
    
return 0;
}