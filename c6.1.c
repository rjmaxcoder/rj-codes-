/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
// Function using a static storage class variable as a counter 
void counterFunction() 
{ 
    {
    // 'static' keyword ensures the variable retains its value between function calls static 
    int count = 0;  
    count++; 
    printf("Function called %d time(s).\n",
    count);
    }
    int main()
    {
        int n, i;
        printf("Enter how many times you want to call the counter function: "); 
        scanf("%d", &n); 
        printf("\n--- Calling Counter Function ---\n"); 
    }
for (i = 0; i < n; i++)
{ counterFunction(); 
    
} 
return 0; 
    
} 