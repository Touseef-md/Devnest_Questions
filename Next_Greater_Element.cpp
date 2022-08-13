
// Next Greater Element
// Stacks
// Medium
// Score: 40
// Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

// The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn’t exist, return -1 for this number.

// Input Format
// First Parameter - number n

// Second Parameter - array nums of size n

// Output Format
// Return the array

#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int n, vector<int> nums){
//CODE HERE 
stack<int> st;
vector<int> ngr(n);
for(int i=2*n-1;i>=0;i--){
    while(!st.empty()&&st.top()<=nums[i%n])
        st.pop();
    if(st.empty())
        ngr[i%n]=-1;
    else{
        ngr[i%n]=st.top();
    }
    st.push(nums[i%n]);
}
return ngr;
}