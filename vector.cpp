#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> s;
    for(int i=1;i<10;i++){
        s.push_back(i*10);
    }
    vector<int>::iterator it=s.begin();
    s.insert(it,11);
    for(int i=0;i<10;i++)
    {
        cout<<s[i]<<"\n";
    }
}
