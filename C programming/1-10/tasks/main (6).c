#include<stdio.h>
#include<conio.h>

void main()
{
    
   int gujrati,english,hindi,maths,science;

   printf("Enter a marks of gujrati : ");
   scanf("%d",&gujrati);
   
   printf("Enter a marks of english : ");
   scanf("%d",&english);
   
   printf("Enter a marks of hindi : ");
   scanf("%d",&hindi);
   
   printf("Enter a marks of maths : ");
   scanf("%d",&maths);
   
   printf("Enter a marks of science : ");
   scanf("%d",&science);
    
    int sum = gujrati+english+hindi+maths+science;
    printf("\n The sum of all subject is : %d",sum);
    
    float percentage = sum/5;
    printf("\n The percentage is : %f",percentage);

   
    getch();
    
}