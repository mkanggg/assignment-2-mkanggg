/* September 2, 2026
 * Manh Khang Nguyen
 * Assignment 1
 */


#include <stdio.h>
#include <math.h>
#include "statistics.h"
#include "output_array.h"


// Print out the sum, std, avg values
void print_rep(int arr[], int n)
{
    printf("\n\nArray: ");
    print_arr(arr,n);   // Go back to output_array.c to print out number in array
    printf("\nThe average is: %.2lf\n", avg(arr,n));
    printf("The std is: %.2f\n", std(arr,n));
    printf("The sum is: %d\n", sum(arr,n));
    printf("The Max is: %d\n", Max(arr,n));
    printf("The Min is: %d\n", Min(arr,n));
    printf("The Absolute Value: %d\n", Absolute(arr,n));
}


// Input of 3 arrays different size and value
int main()
{
    int arr1[] = {1,6,20,17,13};
    int arr2[] = {5,6,10,7};
    int arr3[] = {60,26,28};
    print_rep(arr1,5);
    print_rep(arr2,4);
    print_rep(arr3,3);
    return 0;
}
