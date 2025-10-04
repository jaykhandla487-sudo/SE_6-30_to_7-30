#include<stdio.h>
#include<conio.h>

void main()
{
    
    int r,a;
    float PI = 3.14;
    
    printf("Enter a radius :");
    scanf("%d",&r);
    
    a = PI * r * r ;
    printf("The area of circle is : %d",a);
    getch();
    
}