// NO NEED TO DO

// There is a programming language with only four operations and one variable X:

// ++X and X++ increment the value of the variable X by 1. --X and X-- decrements the value of the variable X by 1. Initially, the value of X is 0.

// Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

// Expected Time Complexity: O(n)
// Expected Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
int solve(int n, vector<string> arr){
//CODE HERE 
int x=0;
for(auto s:arr){
    if(s[0]=='-'||s[2]=='-')
        x--;
    else if(s[0]=='+'||s[2]=='+')
        x++;
}
return x;
}
int main(){
    return 0;
}