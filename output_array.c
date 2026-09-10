#include <stdio.h>
#include "output_array.h"


void print_arr (int arr[], int n)   // print out the number in the array 
{
    printf("(");
    for (int i = 0; i<n; i++)   // Print each number out, loop to skim through the array
    {
        printf("%d ", arr[i]);
    }
    printf(")\n");
}
