#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;


};      //8 Byte

class Derived : public Base
{
    public:
        int x,y;


};      //16 Byte

int main()
{
    Base *bp = NULL;

    bp = new Derived();     //upcasting
    return 0;
}