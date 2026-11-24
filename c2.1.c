/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>  
int main() 
{     
    int num;      
    printf("Enter an integer: ");     
    scanf("%d", &num);      
    if (num % 2 == 0)         
    printf("%d is Even\n", num);     
    else         
printf("%d is Odd\n", num);      
return 0; 
    
} 