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
   
    
    
    
   int arr[100];  
   int i, max, min, size;  
    
    /* 
     * Reads size array and elements in the array 
     */  
    printf("Enter size of the array: ");  
    scanf("%d", &size);  
    printf("Enter elements in the array: ");  
    for(i=0; i<size; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
  
    /* Supposes the first element as maximum and minimum */  
    max = arr[0];  
    min = arr[0];  
  
    /* 
     * Finds maximum and minimum in all array elements. 
     */  
    for(i=1; i<size; i++)  
    {  
        /* If current element of array is greater than max */  
        if(arr[i]>max)  
        {  
            max = arr[i];  
        }  
  
        /* If current element of array is smaller than min */  
        if(arr[i]<min)  
        {  
            min = arr[i];  
        }  
    }  
  
    /* 
     * Prints the maximum and minimum element 
     */  
    printf("Maximum element = %d\n", max);  
    printf("Minimum element = %d\n", min); 
 
    
    
   return 0;
}

