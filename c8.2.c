/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
#include <string.h>
int main() 
{ 
    char str[100]; 
    int i, length,
    flag = 0; 
    printf("Enter a string: "); 
    scanf("%s", str); length = strlen(str); 
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i]) 
        { 
            flag = 1; 
            break; 
            
        } 
        
    } 
    if(flag == 0)
    printf("%s is a palindrome.\n", str);
    else 
printf("%s is not a palindrome.\n", str);
return 0; 
    
}