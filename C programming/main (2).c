#include<stdio.h>
#include<conio.h>

void main()
{
   int num,first,last,sum = 0;
   
   printf("Enter number : ");
   scanf("%d",&num);
  
   last = num%10;
   while(num>=10)
   {
       num = num / 10;
   }
   
   first = num;
   sum = first + last;
   printf("The sum of first and last digits is : %d",sum);
   
   getch();
}