#include<iostream>
using namespace std;

int main()
{
    int n,sum, r;
    cout<<"Enter Num: ";
    cin>>n;

    sum=0;

    while(n!=0)
    {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
    }
    
    cout<<"Reverse Num is: "<<sum;
}