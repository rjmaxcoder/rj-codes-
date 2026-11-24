/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
int main()
{
{ 
    int n, i; 
printf("Enter the number of elements in the array: ");
scanf("%d", &n); int arr[n]; printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) { scanf("%d", &arr[i]); 
    
} 
// Assume first element is largest int largest = arr[0]; 
for(i = 1; i < n; i++)
{ 
    if(arr[i] > largest) 
{
    largest = arr[i];
    // Update largest element } } 
printf("The largest element in the array is: %d\n", largest); 
return 0;
}
}