#include<iostream>
using namespace std;
//Encapsulation   (Binding characteristic and behaviour)
class Marvellous
{
    //Access Specifier (By Default private)

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

    cout<<mobj1.No1<<"\n";  //Error

    mobj1.fun();    //Error
    mobj2.fun();    //Error
    mobj1.gun();    //Error
    return 0;
}
