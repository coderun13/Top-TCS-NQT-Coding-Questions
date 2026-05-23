#include<iostream>
using namespace std;

int main()
{
    int n,sum, r,t;
    cout<<"Enter Num: ";
    cin>>n;

    sum=0;
    t=n;

    while(n!=0)
    {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
    }
    
    if(t==sum)
    {

    cout<<"Yes, it is a palindrome";

    }else{
        cout<<"No, it is not";
    }
}