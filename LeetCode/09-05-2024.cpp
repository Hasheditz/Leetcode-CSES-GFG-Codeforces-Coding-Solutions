# Maximizing Happiness of Selected Children

![Problem Difficulty](https://img.shields.io/badge/Problem-Medium-yellow)
![Status](https://img.shields.io/badge/Status-Solved-brightgreen)

## Problem Description

You are given an array `happiness` of length `n`, and a positive integer `k`.

There are `n` children standing in a queue, where the `ith` child has happiness value `happiness[i]`. You want to select `k` children from these `n` children in `k` turns.

In each turn, when you select a child, the happiness value of all the children that have not been selected till now decreases by 1. Note that the happiness value cannot become negative and gets decremented only if it is positive.

Return the maximum sum of the happiness values of the selected children you can achieve by selecting `k` children.

## Approach

To solve this problem efficiently, we can utilize a greedy approach. We can start by sorting the array of happiness values in non-ascending order. Then, we iterate through the sorted array and select children with the highest happiness values while ensuring that the happiness of unselected children decreases appropriately.

Here's how the approach works:

1. Sort the array `happiness` in non-ascending order.
2. Initialize variables to keep track of the total selected happiness (`out`) and the number of negative decrements (`neg`).
3. Iterate through the sorted array:
   - If there are available turns (`k > 0`), select the child and update the total selected happiness (`out`) by considering the maximum of `0` and the difference between the child's happiness value and the accumulated negative decrements (`neg`).
   - Increment the number of negative decrements if the happiness value of the selected child is positive.
   - Decrement the number of available turns (`k`).
4. Return the maximum sum of selected happiness values (`out`).

## Complexity Analysis

- Time Complexity: O(n log n), where n is the number of children. The sorting operation dominates the time complexity.
- Space Complexity: O(1), since we only use a constant amount of extra space for variables.

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
