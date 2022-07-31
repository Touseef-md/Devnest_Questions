// Container With Most Water

// Given n non-negative integers a1, a2, …, an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i are at (i, ai) and (i, 0).

// Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Note: that you may not slant the container.

#include<bits/stdc++.h>
using namespace std;
int solve(int n, vector<int> arr){
    int max_water=0;
    int i=0,j=n-1;
    while(i<j){
        max_water=max(max_water,min(arr[i],arr[j])*(j-i));
        if(arr[i]<arr[j])
            i++;
        else if(arr[i]==arr[j]){
            i++;j--;
        }
        else{
            j--;
        }
    }
    return max_water;
}
int main(){
    return 0;
}