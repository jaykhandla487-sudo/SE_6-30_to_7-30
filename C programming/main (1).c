#include<stdio.h>
#include<conio.h>

void main()
{
    
    int num,rem,rev = 0;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    while(num>0)
    {
        rem = num%10;
        num = num/10;
        rev = (rev * 10) + rem; 
    }
    printf("The revers number is %d", rev);
    getch();
}