#include<iostream>
#include<vector>
using namespace std;
int main()
{
    std::vector<int>numbers = {2,3,-4,5,-6,-8,-9};
    int i = 0;
    for(int ind = 0;ind<numbers.size();ind++)
    {
        while(i<ind and numbers[i]<0 )
        {
            i++;
        }
        if(numbers[ind]<0)
        {
            int val = numbers[ind];
            for(int ptr = ind;ptr>i;ptr--)
            {
                numbers[ptr] = numbers[ptr-1];
            }
            numbers[i] = val;
        }
    }
    for(auto x:numbers)
    {
        cout<<x<<" ";
    }
}