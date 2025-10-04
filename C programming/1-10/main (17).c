#include<stdio.h>
#include<conio.h>
void main()
{
    
   int marks;
   
   printf("Enter your marks : ");
   scanf("%d" , &marks);
   
   if(marks>=70)
   {
       printf("Your grade is A");
   }
   
   if(marks>=60)
   {
       printf("Your grade is B");
   }
   
   if(marks>=50)
   {
       printf("Your grade is C");
   }
   
   if(marks>=40)
   {
       printf("Your grade is D");
   }
   
   else
   {
       printf("You are fail");
   }
    
    getch();
    
}