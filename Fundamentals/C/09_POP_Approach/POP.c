#include<stdio.h>
int addition(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int subtraction(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    int A = 11,B = 10;
    int Result = 0;
    Result = addition(A,B);
    printf("Addition is: %d\n",Result);
    Result = subtraction(A,B);
    printf("Subtraction is: %d\n",Result);
    return 0;
}
