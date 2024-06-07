#include<iostream>
#include<stdio.h>
#include<sstream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    stringstream ss(n);
    char ch;
    int a,b,c;
    ss>>a>>ch>>b>>ch>>c>>ch;
    cout<<a<<b<<c;

}
