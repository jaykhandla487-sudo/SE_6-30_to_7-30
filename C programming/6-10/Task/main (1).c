#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,factorial = 1;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        factorial = factorial * i;
        printf("\n Your answer is %d = %d",i,factorial);
    }
    getch();
}