#include<iostream>
using namespace std;
class A
{
    public:
    void disp()
    {
        cout<<"in the class A";
    }
};
class B : public A
{
    public:
    void disp()
    {
        cout<<"in the class B";
    }
};
int main()
{

     B obj = B();
    obj.disp();
}
