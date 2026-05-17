// Input: arr[] = {12,13,1,10,34,1}

#include<iostream>
using namespace std;

int findsmallest(int arr[], int n)
{
    int smallest = arr[0];
    for(int i = 0; i<n ;i++)
    {
        if(arr[i] < smallest)
        {
            smallest= arr[i];
        }
    }
    return smallest;
}
int main(){

int arr[] = {12,13,1,10,34,199};
int n = sizeof(arr)/sizeof(int);

cout<<"smallest num is: " <<findsmallest(arr,n) <<endl;
return 0;
}