# 344. Reverse String

## **Date**: June 2, 2024
**Difficulty**: ![Easy](https://img.shields.io/badge/Easy-Green)  
**Related Topics**: ![String](https://img.shields.io/badge/String-blue) ![TwoPointer](https://img.shields.io/badge/TwoPointer-blue)

<p align="left">
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions?tab=readme-ov-file#score-of-a-string" style="margin-right: 5px;">
    <img src="https://img.shields.io/badge/All%20Problem%20Solutions-green" alt="All Problem Solutions">
  </a>
  <a href="https://leetcode.com/problems/reverse-string/">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>

## Editorial

This problem requires us to Write a function that reverses a string. The input string is given as an array of characters s.

### Solution Explanation

To solve this problem, we can iterate through the string `n/2` times and `swap` the values.

#### Key Steps:
1. **Start Iterating** from `index 0` to `n/2` and we can go to the  last index by saying `last = n-i-1`.
2. **Swap** the `curr` index with the `last` index.
3. **Gven function is a void function so, we do not have to return anything just modify the `vector of chars`

### Code

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();

        for(int i = 0 ; i < n/2 ; i++)
        {
            swap(s[i] , s[n-i-1]);
        }
    }
};
```
## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>
