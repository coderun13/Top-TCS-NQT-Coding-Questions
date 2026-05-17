// Input: arr[] = {12,13,1,10,34,1}

#include<iostream>
using namespace std;

int findlargest(int arr[], int n)
{
    int largest = arr[0];
    for(int i = 0; i<n ;i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main(){

int arr[] = {12,13,1,10,34,199};
int n = sizeof(arr)/sizeof(int);

cout<<"largest num is: " <<findlargest(arr,n) <<endl;
return 0;
}