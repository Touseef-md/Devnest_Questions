#include<bits/stdc++.h>
using namespace std;

// MISTAKE::: I Forgot how to implement this in place

// SOLUTION: We need to fill the array from behind then it will not create conflict, I was thinking of filling it from front.

// I was thinking of that we can use this method to sort 2 sorted arrays to apply in merge sort:::

// but I think we cannot do it, because here we have arr1 with extra space to accomodate the second array because of which no conflict occurs...

vector<int> solve(int m, int n, vector<int> arr1, vector<int> arr2){
//CODE HERE 
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0&&j>=0){
        if(arr1[i]>arr2[j])
            arr1[k--]=arr1[i--];
        else
            arr1[k--]=arr2[j--];
    }
    while(i>=0)
        arr1[k--]=arr1[i--];
    while(j>=0)
        arr1[k--]=arr2[j--];
    return arr1;
    
}


int main(){

    return 0;
}