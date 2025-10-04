#include<stdio.h>
#include<conio.h>
void main()
{
    
   int age;
   
   printf("Enter your age : ");
   scanf("%d" , &age);
   
   if(age>=18)
   {
       printf("Eligeble to vote");
   }
   else
   {
       printf(" Not eligeble to vote");
   }
    
  
    
    getch();
    
}