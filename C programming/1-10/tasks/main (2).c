#include<stdio.h>
#include<conio.h>

void main()
{
    
    int num1;
    int num2;
    
    printf("Enter number : ");
    scanf("%d",&num1);
    
    //square
    num2 = num1 * num1;
    printf("\n The square of number is : %d",num2);
    
    //cube
    num2 = num1 * num1 * num1;
    printf("\n The cube of number is : %d",num2);
    getch();

}