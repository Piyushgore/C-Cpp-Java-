#include<stdio.h>
int main()
{
    // Static Memory Allocation
    float marks[5];        //20 bytes
    int i = 0;      //Loop counter

    printf("Enter your marks: \n");
    //Iteration
    //     1     2   3
    for(i = 0;i < 5;i++)
    {
        scanf("%f",&marks[i]);   // --> 4     
    }
    printf("Entered marks are : \n");


    //     1     2   3
    for(i = 0;i < 5;i++)
    {
        printf("%f\n",marks[i]);   // --> 4     
    }

    
    
    return 0;
}