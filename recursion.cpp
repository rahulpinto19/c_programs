#include<iostream>
#include<stdio.h>
using namespace std;
int Sum(int n,int sum){

     if(n==0)return sum;

     return n+Sum(n-1,0);


}
int main()
{
    Sum(10,5);
}