#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    
    long long currentSum = 0;
    long long maxSum = 0;
    for(int i = 0; i < n; i++) {
        currentSum += arr[i];
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
        
        if(currentSum < 0) {
            currentSum = 0;
        }
    }
    
    return maxSum;
}
