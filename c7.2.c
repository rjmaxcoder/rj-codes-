/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
int main() 
{    
    int r, c, i, j;   
    printf("Enter number of rows and columns: ");   
    scanf("%d %d", &r, &c);      
    int a[r][c], b[r][c], 
    sum[r][c];       
    printf("Enter elements of first matrix:\n"); 
    for(i = 0; i < r; i++)       
    for(j = 0; j < c; j++)       
    scanf("%d", &a[i][j]);            
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)      
    for(j = 0; j < c; j++)          
    scanf("%d", &b[i][j]);            
    // Add corresponding elements   
    for(i = 0; i < r; i++)      
    for(j = 0; j < c; j++)         
    sum[i][j] = a[i][j] + b[i][j];    
    printf("Sum of the two matrices:\n");  
    for(i = 0; i < r; i++) {       
        for(j = 0; j < c; j++)            
printf("%d \t",
sum[i][j]);     
printf("\n");   

        
    }   
    return 0; 
    
}