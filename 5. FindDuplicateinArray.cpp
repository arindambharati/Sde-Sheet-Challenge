#include <bits/stdc++.h> 

//Time complexity - O(n) , space complexity - O(n)
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    int max = arr[0];
    int min = arr[0];
    int res;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        
        if(arr[i] < min) {
            min = arr[i];
        }
     }


     int temp[max];
  
     for(int i = min; i <= max; i++) {
        temp[i] = 0;
     }

     for(int i = 0; i < n; i++) {
        temp[arr[i]]++;
     }


     for(int i = min; i <= max; i++) {
         if(temp[i] > 1) {
             res = i;
             break;
         }
     }
    
    return res;
}
