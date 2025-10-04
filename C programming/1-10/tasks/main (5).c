#include<stdio.h>
#include<conio.h>

void main()
{
    
    int princi,year;
    float roi;
    
    printf("Enter a princi : ");
    scanf("%d",&princi);
    
    printf("Enter a year : ");
    scanf("%d",&year);
    
    printf("Enter rate of intrest : ");
    scanf("%f",&roi);
    
    float intrest = princi * roi * year / 100;
    float total = princi + intrest;
    
    printf("The total is : %f",total);
    
   
    getch();
    
}