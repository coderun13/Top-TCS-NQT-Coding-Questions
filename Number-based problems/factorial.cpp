#include<iostream>
using namespace std;

int main()
{
    int n,i,f;
    
    cout<<"Enter the number to find factorial of: ";
    cin>>n;
    f=n;

    for(i=1;i<n;i++)
    {
        f=f*i;
    }
    cout<<"factorial of "<<n<<" is: "<<f;
}