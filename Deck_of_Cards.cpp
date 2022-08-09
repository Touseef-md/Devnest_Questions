
                            // Deck Of Cards
// Arrays
// Easy
// Score: 10


// In a deck of cards, each card has an integer written on it.

// Return 1 if and only if you can choose X >= 2 such that it is possible to split the entire deck into 1 or more groups of cards, else return 0 where:

// Each group has exactly X cards.
// All the cards in each group have the same integer.
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);    
}
int solve(int n, vector<int> deck){
//CODE HERE 
unordered_map<int,int> mp;
    for(auto it:deck)
        mp[it]++;
    if(mp.size()==1){
        if(mp.begin()->second%2!=0)
            return 0;
        return 1;
    }
    // return 1;
    int first=mp.begin()->second,_gcd=mp.begin()->second;
    for(auto it=(++mp.begin());it!=mp.end();it++){
        first=min(first,it->second);
        _gcd=gcd(_gcd,it->second);
        // if(it->second!=first)
        //     return 0;
    }
    if(_gcd!=1)
        return 1;
    return 0;
}