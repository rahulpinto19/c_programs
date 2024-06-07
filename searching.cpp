#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"please enter the array you want to search:";
    cin>>n;
    for(int i=0;i<s;i++)
    {
        if(arr[i]==n)
        {
            cout<<i<<"\n";
        }
    }
}
