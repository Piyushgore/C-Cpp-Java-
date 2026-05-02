#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        Base()
        {
            cout<<"Inside base constructor\n";
            i = 0;
            j = 0;
        }

        void fun()
        {
            cout<<"Inside base fun\n";
        }

        ~Base()
        {
            cout<<"Inside base destructor\n";
        }

};

class Derived : public Base
{

};

int main()
{
    Base bobj;

    // Derived dobj;

    return 0;
}