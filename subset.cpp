#include<iostream>
#include<conio.h>
using namespace std;
i   nt main()
{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(a[i]==a[j])
                {
                    cout<<i;
                }
                }
            }
        }
}
