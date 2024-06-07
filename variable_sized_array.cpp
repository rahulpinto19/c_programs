#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x,y,n,s=0;
    cin>>x>>y;
    int *arr[x];
    while(x--)
    {
        cin>>n;
        arr[s] = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[s][i];

        }
        s++;
    }

    while(y--)
    {
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }

}
