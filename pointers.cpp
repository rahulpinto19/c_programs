#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class cls
{
public:
    int num1;
    int num2;
    string name;
    cls(int num1,int num2,string name)
    {

        this->num1 = num1;
        this->num2 = num2;
        this->name = name;
    }
    void disp()
    {

        cout<<num1<<" "<<num2<<" "<<name;
    }
};
int main()
{
    cls obj(12,32,"rahul");
    obj.disp();
   return 0;
}
