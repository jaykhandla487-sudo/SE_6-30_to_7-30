#include<stdio.h>
#include<conio.h>

void main()
{
    int randomnum,luckynum = 44 , max = 5 , i ;
    
    printf("Enter number between (1 to 100)");
    
    for(i=1;i<=max;i++)
    {
        printf("\n Try %d : ",i);
        scanf("%d",&randomnum);
        
        if(randomnum == luckynum)
        {
            printf("\n Congratulations you guessed the number");
            break;
        }
        else if(randomnum<luckynum)
        {
            printf("\n Try with higher number");
        }
        else
        {
             printf("\n Try with lower number");
        }
        if (i == max)
        {
            printf("\n Maximum try available for 5 times-> Game Over");
        }
        
    }
    
    
    getch();
}