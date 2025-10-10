#include<stdio.h>
#include<conio.h>

void main()
{
    
    int num,i,answer;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(i=1;i<=10;i++)
    {
        
        answer = num * i;
        printf("\n %d * %d = %d",num,i,answer);
    }
    
    getch();
}