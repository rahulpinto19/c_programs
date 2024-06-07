#include<iostream>
#include<stdio.h>
using namespace std;
class cmplx
{
    int real,image;
public:
    cmplx(int r=0,int i=0)
    {
        real = r;
        image = i;
    }
    cmplx operator+(cmplx const &obj)
    {
        cmplx res;
        res.real = obj.real + real;
        res.image = obj.image + image;
        return res;
    }
    void disp()
    {
        cout<<"real "<<real<<" image "<<image<<endl;
    }
} ;
int main()
{
    cmplx c1(15,2),c2(54,2);
    cmplx c3 = c1+c2;
    c3.disp();
}
