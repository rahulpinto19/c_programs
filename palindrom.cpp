#include<iostream>
#include<stdio.h>
using namespace std;
int main()

{
    int n,a,b;
    int arr[b];
    cin>>n;
    while(1)
    {
        a=n%10;
        n=n/10;
        b++;
        if(a!=0)
        {
            for(int i=0;i<b;i++)
            {

                cin>>arr[i];
            }
        }
    }
    for(int j=0;j<b;j++)
    {
        if(arr[i]==arr[j])
        {
            cout<<"palindrome";
        }
        else
            cout<<"not palindrome";
    }
}
