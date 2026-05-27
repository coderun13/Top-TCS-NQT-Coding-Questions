#include<iostream>
using namespace std;

int main()
{
    int n, i, sum=0;
    
    cout<<"Total elements of array: ";
    cin>>n;
    
    int a[n];

    cout<<"Enter the elements of array: ";

    for(i=0;i<n;i++)
    {
    cin>>a[i];
    sum=sum+a[i];
    }
        
    cout<<"Sum is: "<<sum<<endl;
     return 0;
}