# **Date**: June 3, 2024

# 2486. Append Characters to String to Make Subsequence

**Difficulty**: ![Medium](https://img.shields.io/badge/Medium-Yellow)  
**Related Topics**: ![String](https://img.shields.io/badge/String-blue) ![TwoPointer](https://img.shields.io/badge/TwoPointer-blue)

<p>
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions?tab=readme-ov-file#append-characters-to-string-to-make-subsequence" style="margin-right: 5px;">
    <img src="https://img.shields.io/badge/All%20Problem%20Solutions-green" alt="All Problem Solutions">
  </a>
  <a href="https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>

## Editorial

This problem requires us to determine the minimum number of characters that need to be appended to the end of a string `s` so that another string `t` becomes a subsequence of `s`.

### Solution Explanation

To solve this problem efficiently, we can use a two-pointer technique. The idea is to iterate through both strings `s` and `t` simultaneously to find the number of characters in `t` that are not in `s`. This will tell us the number of characters we need to append to `s`.

#### Key Steps:
1. **Initialize Pointers**: Use two pointers, `temp1` for iterating through `s` and `temp2` for iterating through `t`.
2. **Iterate through the Strings**:
   - If the current character in `t` (`t[temp2]`) matches the current character in `s` (`s[temp1]`), increment both pointers.
   - If they do not match, only increment the pointer for `s` (`temp1`).
3. **Calculate the Result**: After the loop, the difference between the length of `t` and the pointer `temp2` gives the number of characters that need to be appended.

### Code

```cpp
class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size(), m = t.size();
        int temp1 = 0, temp2 = 0;

        while (temp1 < n && temp2 < m) {
            if (t[temp2] == s[temp1]) {
                temp1++;
                temp2++;
            } 
			else {
                temp1++;
            }
        }

        return m - temp2;
    }
};
```
### Complexity Analysis
- **Time Complexity**: O(n + m), where `n` is the length of `s` and `m` is the length of `t`. This is because we are iterating through both strings once.
- **Space Complexity**: O(1), as we are using a constant amount of extra space.

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>
