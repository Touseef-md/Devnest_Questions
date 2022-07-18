// QUESTION::
// Given two strings s1 and s2, return true if s2 is an anagram of s1, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// return 1 if true or 0 if false.

// Expected Time Complexity: O(n)
// Expected Space Complexity: O(n)



// I've done in T.C.: O(N) and space complexity O(1)

#include <bits/stdc++.h>
using namespace std;
int solve(string s1, string s2){
//CODE HERE 
vector<int> arr(26,-10);
for(int i=0;i<s1.length();i++){
    if(arr[s1[i]-97]==-10){
        arr[s1[i]-97]=0;
    }
    arr[s1[i]-97]++;
}
for(int i=0;i<s2.length();i++)
    arr[s2[i]-97]--;
for(int i=0;i<26;i++){
    if(arr[i]==-10||arr[i]==0)
        continue;
    else{
        return 0;
    }
}
return 1;
}
int main(){
    return 0;
}