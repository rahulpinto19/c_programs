#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>t1,t2;
    t1.push_back(1);
    t1.push_back(2);
    t1.push_back(1);
    for(int i=1;i<=n;i++)
    {

        for(int j = -1;j<t1.size();j++)
        {
            if(j == -1 || j+1 == t1.size())
            {
                cout<<1<<" ";
                t2.push_back(1);
            }
            else
            {
                cout<<t1[j] + t1[j+1] <<" ";
                t2.push_back(t1[j] + t1[j+1]);
            }
        }
        cout<<endl;
        t1 = t2;
    }
}
