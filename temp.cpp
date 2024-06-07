#include <iostream>
using namespace std;
int main() {
  try
  {
        try
        {

            throw 20;
        }
        catch(int x)
        {
            cout<<"inner try"<<endl;
        }
        throw ;
  }
  catch()
  {
      cout<<"outer catch"<<endl;
  }

}
