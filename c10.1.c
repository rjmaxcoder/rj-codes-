/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
int main() 
{ 
    int num1, num2, sum;
    int *ptr1 = &num1, *ptr2 = &num2; 
    printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);
    sum = *ptr1 + *ptr2; 
// Dereference addition 
printf("Sum = %d\n", sum);
return 0; 
    
}