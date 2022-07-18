// MISTAKE::I forgot in this question the approach....

// SOLUTION:: We have to do the XOR of the entire array.

// Given an array of integers nums of size n. Every element appears twice except for one. Return the element which appears only once.

// Expected Time Complexity: O(n)
// Expected Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
int solve(int n, vector<int> nums){
//CODE HERE 
    int xo=0;
    for(auto it:nums)
        xo^=it;
    return xo;
}
int main(){

    return 0;
}