#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int m,y,z;
    int count;
    cout<<"enter the size of the 1st array:";
    cin>>m;
    //declaring the arrays
    int arr[m];

    int k[m];
    cout<<"enter the elements";
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the size of 2nd hte array";
    cin>>y;
    int ruchi[y];
    cout<<"enter the elements\n";
    for(int i=0;i<y;i++)
    {
        cin>>ruchi[i];
        cout<<i<<"is the value\n";
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(arr[i]<0||arr[j]<0)
            {
                int count=0;
            }
            else
            {
                int count=1;
            }

        }
    }
    if(count=0)
    {
     for(int i=0;i<m+y;i++)
                {
                    int z=2*i+1;
                    cin>>k[z];
                }
    }
    if(count=1)
    {
        for(int i=0;i<m+y;i++)
                {
                    int z=2*i;
                    cin>>k[z];
                }
    }

    for(int i=0;i<m+y;i++)
    {
        cout<<k[i]<<"\n";
    }


}
