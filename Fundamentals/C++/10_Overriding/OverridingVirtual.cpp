#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Inside Base fun\n";   }

        virtual void gun()
        { cout<<"Inside Base gun\n";   }
        virtual void sun()
        { cout<<"Inside Base sun\n";   }
        
};      //8 Byte

class Derived : public Base
{
    public:
        int x,y;
        void fun()      //Redefinition
        { cout<<"Inside Derived fun\n";   }
        void sun()
        { cout<<"Inside Derived sun\n";   }
        virtual void run()      //Definition
        { cout<<"Inside Derived run\n";   }

};      //16 Byte

int main()
{
    Base *bp = new Derived();   //Upcasting

    bp->fun();
    bp->gun();
    bp->sun();
    // bp->run();      //Error
    return 0;
}