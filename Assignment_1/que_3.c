// program to print 5 to 1 number on screen.

#include<stdio.h>

int Display()
{
 
    int  i = 5;

    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
int main()
{
    Display();

    return 0;
}