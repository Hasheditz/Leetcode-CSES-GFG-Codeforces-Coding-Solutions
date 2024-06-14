# **Date**: June 14, 2024

# 945. Minimum Increment to Make Array Unique

**Difficulty**: ![Medium](https://img.shields.io/badge/Medium-yellow)  
**Related Topics**: ![Greedy](https://img.shields.io/badge/Greedy-blue) ![Array](https://img.shields.io/badge/Array-blue)

<p>
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions?tab=readme-ov-file#minimum-increment-to-make-array-unique" style="margin-right: 5px;">
    <img src="https://img.shields.io/badge/All%20Problem%20Solutions-green" alt="All Problem Solutions">
  </a>
  <a href="https://leetcode.com/problems/minimum-increment-to-make-array-unique/">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>

## Editorial

To solve the problem of making all elements in an array unique with the minimum increment, it helps to have experience with a similar problem: [Minimum Operations to Make the Array Increasing](https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/). Understanding how to increment elements to maintain a specific property of the array will aid in tackling this problem.

### Solution Explanation

The goal is to make every element in the array unique by incrementing some of the elements with the minimum number of operations. Here's how to achieve this:

#### Key Steps:
1. **Sort the Array**: Start by sorting the array. This allows us to easily detect duplicates.
2. **Increment to Make Unique**: Iterate through the sorted array, and for each duplicate, increment it until it becomes unique. Keep track of the total increments made.

### Code

```cpp
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());
        
        int cnt = 0;
        
        // Step 2: Increment duplicates to make them unique
        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {
                int temp = nums[i];
                nums[i] = nums[i - 1] + 1;
                cnt += nums[i] - temp;
            }
        }
        
        return cnt;
    }
};
```
## Explanation of Code

### Initialization:
We sort the array `nums` to facilitate detecting and handling duplicates easily.

### Increment to Make Unique:
We iterate through the sorted array. For each element that is not greater than the previous element, we increment it to be one more than the previous element. This ensures all elements are unique.
We keep a count of all the increments made to achieve this.

This approach ensures that all elements in the array are unique with the minimum number of increments.

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>
