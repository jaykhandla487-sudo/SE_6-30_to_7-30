#include<stdio.h>
#include<conio.h>

void main(){
    
  int principle = 12000 , year = 5;
  float roi = 3.8;
  
  float intrest= principle * roi * year/100;
  float total = principle+intrest;
  printf("The total amount is %f",total);
   
   
    getch();
    
}