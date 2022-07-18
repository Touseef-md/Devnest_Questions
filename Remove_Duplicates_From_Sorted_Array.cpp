//Very easy Not necessary to do

// Remove Duplicates From Sorted Array
// Arrays
// Easy
// Score: 10
// Given an array arr of size n sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once keeping the relative order of the element same.
// Expected Time Complexity: O(n)
// Expected Space Complexity: O(n)
// Input Format
// First Parameter - number n

// Second Parameter - array arr of size n

// Output Format
// Return the array..
#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int n, vector<int> arr){
//CODE HERE 
vector<int> result;
int i=0;
result.push_back(arr[i]);
i++;
while(i<n){
    if(arr[i]==arr[i-1])
    {
        i++;
        continue;
    }
    else{
        result.push_back(arr[i++]);
    }
}
return result;
}
int main(){
    return 0;
}