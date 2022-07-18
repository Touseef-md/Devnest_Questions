//Very Easy no need to do


// From a zero-based permutation nums (0-indexed), we have to build an array(ans) of same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and then return it.

// A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

// Time complexity: O(n)
// Auxillary space complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int n, vector<int> arr){
//CODE HERE 
vector<int> result(n);
for(int i=0;i<n;i++){
    result[i]=arr[arr[i]];
}
return result;
}
int main(){

    return 90;
}