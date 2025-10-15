#include<stdio.h>
#include<conio.h>

void main()
{
    
    int i,j;
    char alphabet = 'A';
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++){
            printf("%c",alphabet);
          
        }
        alphabet++;
        printf("\n");
    }
    getch();
}