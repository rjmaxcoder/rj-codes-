/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
int main() 
{ 
    char str[100]; 
int length = 0; 
printf("Enter a string: "); 
scanf("%s", str); 
// Iterate until null terminator '\0' 
while(str[length] != '\0')
{ 
    length++; } 
printf("The length of the string is: %d\n", length);
return 0; 
    
}
