//VERY EASY NOT NEED TO DO

// Sum Of 1d Array
// Arrays
// Easy
// Score: 20
// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

// Input Format
// First parameter - number n

// Second parameter - array nums of size n.

// Output Format
// Return the array of numbers.
#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int n, vector<int> nums){
//CODE HERE 
vector<int> result;
int sumi=0;
for(int i=0;i<n;i++){
    sumi+=nums[i];
    result.push_back(sumi);
}
return result;
}
