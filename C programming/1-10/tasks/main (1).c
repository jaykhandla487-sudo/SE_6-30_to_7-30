#include<stdio.h>
#include<conio.h>

void main()
{
    
    int num1;
    int num2;
    int num3;
    
    printf("Enter number 1 :");
    scanf("%d",&num1);
    printf("Enter number 2 :");
    scanf("%d",&num2);
    
    //addititon
    num3 = num1+num2;
    printf("\n The addititon of two number is : %d",num3);
    
    //subtraction
    num3 = num1-num2;
    printf("\n The subtraction of two number is : %d",num3);
    
    //multiplication
    num3 = num1*num2;
    printf("\n The multiplication of two number is : %d",num3);
    
    //division
    num3 = num1/num2;
    printf("\n The division  of two number is : %d",num3);
    
    getch();

}