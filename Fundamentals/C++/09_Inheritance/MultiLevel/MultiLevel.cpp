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
    public:
        int x;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x = 0;
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";

        }
        void gun()
        {
            cout<<"Inside gun of derived\n";
        }
};
class DerivedX : public Derived
{
    public:
        int y;
        DerivedX()
        {
            cout<<"Inside derivedX constructor\n";
            y = 0;
        }
        ~DerivedX()
        {
            cout<<"Inside derivedX destructor\n";
        }
        void sun()
        {
            cout<<"Inside derivedX sun\n";
        }
};
int main()
{
    cout<<"Inside main\n";
    DerivedX dobj;


    cout<<"size of base class object is : "<<sizeof(Base)<<"\n";        //8
    cout<<"size of derived class object is : "<<sizeof(Derived)<<"\n";  //12
    cout<<"size of derived class object is : "<<sizeof(DerivedX)<<"\n";  //16

    cout<<dobj.i<<"\n";     //0
    cout<<dobj.j<<"\n";     //0
    cout<<dobj.x<<"\n";     //0
    cout<<dobj.y<<"\n";     //0


    dobj.fun();
    dobj.gun();
    dobj.sun();
    cout<<"End of main\n";
    return 0;
}
