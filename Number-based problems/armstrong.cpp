// (1^3 = 1)
// (5^3 = 125)
// (3^3 = 27)

// (1 + 125 + 27 = 153) So, 153 is a armstrong number.

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
    r=n%10; //153%10 = 3 5 1
    sum=sum+r*r*r;
    n=n/10;
    }
    
    if(t==sum)
    {
        cout<<"Yes, it is an armstrong number";

    }else{
        cout<<"No, it is not";
    }
}