#include<stdio.h>
int main() 
{
   float x;
   scanf("%f",&x);
   switch (x)
   {
       case 1: printf("Choice is 1");
                 break;
       default: printf("Invalid choice");
                break; 
   }
   return 0;
}
