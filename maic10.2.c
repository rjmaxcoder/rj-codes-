/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main() 
{ 
    int n, i; 
    printf("Enter size: ");
    scanf("%d", &n); 
    int arr[n]; 
    for(i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    int *ptr = &arr[n - 1]; 
    // Point to end element printf("Reversed Array: ");
    for(i = n - 1; i >= 0; i--) 
    { 
printf("%d ", *ptr); 
ptr--; 
// Move memory pointer backward 
}
printf("\n");
return 0; 
    
}