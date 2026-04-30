#include<iostream>
using namespace std;
// 1: Tula kay karaychay? -> Behaviours
// Answer -> Addition & Subtraction
// 2: Te karnyakarta tula ky lagnar ahe? -> Characteristics
// Answer -> 2 numbers (2 int) -> int No1,int No2

class Arithematic
{
    public:
        int No1;
        int No2;
    Arithematic()
    {
        No1 = 0;
        No2 = 0;
    }
    Arithematic(int value1,int value2)
    {
        No1 = value1;
        No2 = value2;
    }

    int addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    int subtraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
};



int main()
{
    Arithematic aobj(11,10);
    int Result = 0;
    Result = aobj.addition();
    cout<<"Addition is: "<<Result<<"\n";
    Result = aobj.subtraction();
    cout<<"Subtraction is: "<<Result<<"\n";
    return 0;
}
