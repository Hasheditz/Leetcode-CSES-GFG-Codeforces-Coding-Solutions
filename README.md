### Today's Question

# Maximizing Happiness of Selected Children

![Problem Difficulty](https://img.shields.io/badge/Problem-Medium-yellow)
![Status](https://img.shields.io/badge/Status-Solved-brightgreen)

**Date**: 9 May 2024  
**Question**: [Maximize Happiness of Selected Children](https://leetcode.com/problems/maximize-happiness-of-selected-children)

## Problem Description

You've got a bunch of kids lined up with their happiness levels stored in an array called `happiness`. You also have a number `k` telling you how many kids you can pick.

Every time you pick a kid, the remaining unpicked kids lose a point of happiness, but their happiness can't drop below zero.

Your job? Pick the happiest kids you can to maximize the total happiness.

## Approach

Here's the plan:

1. First, sort the kids based on their happiness, from happiest to least happy.
2. Then, start picking kids one by one. If you still have turns left (`k > 0`), pick the happiest kid, but don't forget to update the total happiness and track how many times you've picked a kid.
3. Keep doing this until you've used up all your turns (`k`).

## Complexity Analysis

- Time Complexity: O(n log n), where n is the number of kids. The sorting part takes most of the time.
- Space Complexity: O(1), because we're not using any extra space that grows with the input size.

## Code

```cpp
class Solution {
public:
    long long maximumHappinessSum(vector<int>& hap, int k) {
        
        sort(hap.begin(), hap.end(), greater<int>());
        int n = hap.size();
        
        int neg = 0;
        long long out = 0;
        for(int i = 0; i < n; ++i){
            if(k > 0){
                out += max(0, hap[i] - neg);
                if(hap[i] - neg >= 0){
                    ++neg;
                }
                --k;
            } 
        }
        return out;
    }
};
```

## Contribution and Support
I always encourage contributors to participate in the discussion forum for this repository.

If you have a better solution or any queries/discussions related to the Problem of the Day solution, please visit our discussion section. We welcome your input and aim to foster a collaborative learning environment.

If you find this solution helpful, consider supporting us by giving a ⭐ star to the [repository](https://github.com/Hasheditz/leetcode-solutions).

