#include <math.h>
#include "statistics.h"


int sum(int arr[], int n)
{
    int s;
    for(int i=0;i<n;i++) // Loop to go each number
    {
        s+=arr[i]; // Sum all number the loop go through
    }
    return s;
}


// Calculate the Average
double avg(int arr[], int n)
{
    return (double)sum(arr,n)/n; // use double for sum to get more accurate average
}


double std(int arr[], int n)
{
    double mean = avg(arr,n); // Let mean equal to average number of the select array
    double s = 0; // Let sum equal 0
    for (int i = 0;i<n;i++)  // Find the sum
    {
        s+=(arr[i] - mean)*(arr[i] - mean);
    }
    return sqrt(s / n);
}


int Min(int arr[], int n)   // Find the Min number in the array
{
    int min = arr[0];
    for (int i = 1; i<n; i++)  // Create a Loop to skim through each number of array, if lower than the min, that number will become min
    {
        if(arr[i] < min)
	{
	    min = arr[i];
	}
    }
    return min;
}


int Max(int arr[], int n)    // Find the Max number in the array
{
    int max = arr[0];
    for (int i=1;i<n;i++)    // Create a Loop to skim through each number of array, if higher than the max, that number will become max
    {
        if(arr[i]>max)
	{
	    max = arr[i];
	}
    }
    return max;
}



int Absolute(int arr[], int n)  // Find the absolute value of the difference between the maximum and minimum
{
    return Max(arr,n) - Min(arr,n);   // Absolute Max - Absolute Min
}



