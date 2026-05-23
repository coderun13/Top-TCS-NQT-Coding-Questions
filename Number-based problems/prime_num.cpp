#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to check if prime or not: ";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        cout<<"Not Prime"<<endl;
        break;
        }
        else
        {
        cout<<"Prime Num";
        }
    }
}