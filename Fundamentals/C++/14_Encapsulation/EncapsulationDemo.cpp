#include<iostream>
using namespace std;
//Encapsulation   (Binding characteristic and behaviour)
class Marvellous
{
    //Access Specifier
    public:
    int No1,No2;    //Characteristics

    void fun()  //Behaviour
    {
        cout<<"Inside Fun\n";
    }

    void gun()  //Behaviour
    {
        cout<<"Inside gun\n";
    }
};
int main()
{
    //Object Creation
    //Object is also called Instance
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";

    cout<<mobj1.No1<<"\n";

    mobj1.fun();
    mobj2.fun();
    mobj1.gun();
    return 0;
}
