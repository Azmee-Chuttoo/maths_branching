//This is the line causing issue in the conflict branch 
//This is the second line causing issue in the <*master/conflict> branch *delete as appropriate
#include<stdio.h>
 
int main()
{
   int a, b, c, dividend, divisor, quotient, remainder;
 
   printf("Enter two numbers to Addition\n");
   scanf("%d%d",&a,&b);
 
   c = a + b;
 
   printf("Sum of entered numbers = %d\n",c);
 


   printf("Enter two numbers to subtraction\n");
   scanf("%d%d",&a,&b);
 
   c = a - b;
 
   printf("Sum of entered numbers = %d\n",c);
 


 
   printf("Enter two numbers to multiply\n");
   scanf("%d%d",&a,&b);
 
   c = a * b;
 
   printf("Sum of entered numbers = %d\n",c);
 
 


   printf("Enter two numbers to division\n");
   scanf("%d%d",&a,&b);
 
   c = a / b;
 
   printf("Sum of entered numbers = %d\n",c);
 
   
    printf("Enter dividend: ");
    scanf("%d",&dividend);
    printf("Enter divisor: ");
    scanf("%d",&divisor);
    quotient=dividend/divisor;           /*  Computes quotient */
    remainder=dividend%divisor;          /* Computes remainder */
    printf("Quotient = %d\n",quotient);
    printf("Remainder = %d",remainder);
   

   return 0;
}

