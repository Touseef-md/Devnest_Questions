// Given a string s which consists of lowercase English letters. Removing duplicates means choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made.(Answer is proven as unique)

// Time complexity: O(n)
// Auxillary space complexity: O(n)

// Standard Stack problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
string solve(string s){
//CODE HERE 
stack<char> st;
for(int i=0;i<s.length();i++){
    if(st.empty()){
        st.push(s[i]);
    }
    else if(st.top()==s[i])
        st.pop();
    else 
        st.push(s[i]);
}
string ss="";
while(!st.empty()){
    ss+=st.top();
    st.pop();
}
reverse(ss.begin(),ss.end());
return ss;
}