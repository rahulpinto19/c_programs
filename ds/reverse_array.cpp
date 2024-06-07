#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int s=0;
    int e=n-1;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(s<e)
    {
        int temp =arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
    }
    cout<<arr[2];
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
