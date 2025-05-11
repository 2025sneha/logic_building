//write a program which accept one number from user and print that number of even numbers on screen.
// Input  : 7
// Output : 2 4 6 8 10 12 14

#include<stdio.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return  ;
    }
     int iCount = 0;
     int iNum = 2;

     while(iCount < iNo)
    {
        printf("%d ", iNum);
        iNum += 2;
        iCount++;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    printEven(iValue);

    return 0;
}
