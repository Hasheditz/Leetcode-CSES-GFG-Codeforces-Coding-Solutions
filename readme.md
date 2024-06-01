# 3110. Score of a String

## **Date**: June 1, 2024
**Difficulty**: ![Easy](https://img.shields.io/badge/Easy-Green)  
**Related Topics**: ![String](https://img.shields.io/badge/String-blue)  

<p align="left">
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions?tab=readme-ov-file#score-of-a-string" style="margin-right: 5px;">
    <img src="https://img.shields.io/badge/All%20Problem%20Solutions-green" alt="All Problem Solutions">
  </a>
  <a href="https://leetcode.com/problems/score-of-a-string/">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>

## Editorial

This problem requires us to calculate a score based on the absolute differences between adjacent characters in a given string. The challenge is to achieve this in an efficient manner.

### Solution Explanation

To solve this problem, we can iterate through the string and calculate the absolute difference between each pair of adjacent characters. Here’s a step-by-step explanation of the approach:

#### Key Steps:
1. **Initialization**: Initialize a variable `res` to 0 to store the cumulative score.
2. **Iterate Through the String**: Traverse each character in the string except the last one.
3. **Calculate Absolute Differences**: For each character, compute the absolute difference with the next character and add this difference to `res`.
4. **Return the Result**: After processing all adjacent pairs, return `res` as the final score.

### Code

```cpp
class Solution {
public:
    int scoreOfString(string s) {
	
        int res = 0;
        int n = s.size();

        for(int i = 0; i < n-1; i++) {
            res += abs(s[i] - s[i+1]);
        }

        return res;
    }
};
```
### Explanation of Code

#### Initialization:
- `res` is initialized to 0, which will hold the final score.
- `n` is assigned the size of the input string `s`.

#### Iterate Through the String:
- A `for` loop is used to iterate through the string from the first character to the second-to-last character.

#### Calculate Absolute Differences:
- For each character in the string, the absolute difference between the current character `s[i]` and the next character `s[i+1]` is calculated using `abs(s[i] - s[i+1])`.
- This difference is added to `res`.

#### Return the Result:
- After the loop completes, `res` holds the total score, which is then returned.

This approach ensures an efficient calculation of the score based on the sum of the absolute differences between each pair of adjacent characters in the string.

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>
