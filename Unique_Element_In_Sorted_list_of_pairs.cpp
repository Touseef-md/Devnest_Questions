#include <bits/stdc++.h>
using namespace std;

// QUESTION::
// Given an array of integers nums of size n. Every element appears twice except for one. Return the element which appears only once.

// Input Format
// First Parameter - number n

// Second Parameter - array of integers nums of size n

// Output Format
// Return the number.




// Good question 

// SOLUTION: T.C.:O(logn), S.C:O(1)
// We observe that if the repeated number ends at odd index then the number is on the right side , similarly we can form cases.

int solve(int n, vector<int> nums)
{
    // CODE HERE
    int l = 0, r = n - 1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (l == r)
            return nums[l];
        if (mid - 1 >= 0 && mid + 1 < n && nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if (mid - 1 >= 0 && nums[mid - 1] == nums[mid])
        {
            if (mid % 2 != 0)
                l = mid + 1;
            else
                r = mid - 2;
        }
        else if (mid + 1 < n && nums[mid] == nums[mid + 1])
        {
            if (mid % 2 == 0)
                l = mid + 2;
            else
                r = mid - 1;
        }
    }
    return 909;
}

int main()
{
    return 0;
}