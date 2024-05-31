# 260. Single Number III

**Difficulty**: ![Medium](https://img.shields.io/badge/Medium-yellow)  
**Related Topics**: ![Array](https://img.shields.io/badge/Array-blue) ![Bit Manipulation](https://img.shields.io/badge/Bit%20Manipulation-blue)  
**Date**: May 31, 2024

<p>
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions?tab=readme-ov-file#260-single-number-iii">
    <img src="https://img.shields.io/badge/All%20Problem%20Solutions-orange" alt="All Problem Solutions">
  </a>
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>


## Editorial

This problem requires us to find the two non-repeating numbers in an array where every other number repeats exactly twice. The challenge is to solve this in linear time complexity and with constant space complexity.

### Solution Explanation

To solve this problem, we can use bit manipulation efficiently. The key idea is to use the XOR operation to differentiate the two unique numbers.

#### Key Steps:
1. **XOR All Elements**: First, XOR all the numbers in the array. The result will be the XOR of the two unique numbers since all the duplicate numbers will cancel each other out.
2. **Find Rightmost Set Bit**: Identify the rightmost set bit in the XOR result. This bit will help in dividing the numbers into two different buckets.
3. **Divide and XOR Again**: Use the identified set bit to divide all the numbers into two groups. XOR each group separately. This will isolate the two unique numbers since they differ at the identified bit position.

### Code

```cpp
#define ll long long
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int bucket1 = 0, bucket2 = 0;
        ll right_set_bit = 0;

        // Step 1: XOR all elements to find the combined XOR of the two unique numbers
        for (auto i : nums) {
            right_set_bit ^= i;
        }

        // Step 2: Find the rightmost set bit in the combined XOR result
        right_set_bit = (right_set_bit & (right_set_bit - 1)) ^ right_set_bit;

        // Step 3: Divide numbers into two buckets and XOR each bucket
        for (auto i : nums) {
            if (i & right_set_bit) {
                bucket1 ^= i;
            } else {
                bucket2 ^= i;
            }
        }

        // The two buckets now contain the two unique numbers
        return {bucket1, bucket2};
    }
};
```
### Explanation of Code
1. **XOR Calculation:** We iterate through the array and calculate the `XOR` of all numbers `(right_set_bit ^= i)`. This step leaves us with the `XOR` of the two unique numbers.
2. **Identify Set Bit:** We find the rightmost set bit in the `XOR` result using `(right_set_bit & (right_set_bit - 1)) ^ right_set_bit`. This bit is guaranteed to be different between the two unique numbers.
3. **Dividing and Isolating:** We then divide the numbers into two groups based on the identified set bit and `XOR` the numbers within each group. This isolates the two unique numbers.

**This approach ensures we find the two unique numbers in linear time and with constant space, meeting the problem's requirements efficiently.**

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>