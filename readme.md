# **Date**: June 13, 2024

# 2037. Minimum Number of Moves to Seat Everyone

**Difficulty**: ![Easy](https://img.shields.io/badge/Easy-brightgreen)  
**Related Topics**: ![Greedy](https://img.shields.io/badge/Greedy-blue) ![Sorting](https://img.shields.io/badge/Sorting-blue)

<p>
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions?tab=readme-ov-file#minimum-number-of-moves-to-seat-everyone" style="margin-right: 5px;">
    <img src="https://img.shields.io/badge/All%20Problem%20Solutions-green" alt="All Problem Solutions">
  </a>
  <a href="https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>

## Editorial

This problem requires us to determine the minimum number of moves required to seat each student in an available seat such that the sum of the absolute differences between the positions of the students and the seats they occupy is minimized.

### Solution Explanation

To solve this problem efficiently, we can break down the solution into the following steps:

#### Key Steps:
1. **Sort the Arrays**: Sort both the `seat` and `student` arrays.
2. **Calculate Minimum Moves**: Iterate through the sorted arrays and sum the absolute differences between the corresponding elements of the `seat` and `student` arrays.

### Code

```cpp
class Solution {
public:
    int minMovesToSeat(vector<int>& seat, vector<int>& student) {
        // Step 1: Sort the seat and student arrays
        sort(seat.begin(), seat.end());
        sort(student.begin(), student.end());

        // Step 2: Initialize the answer variable
        int ans = 0;

        // Step 3: Calculate the total minimum moves
        for(int i = 0; i < seat.size(); i++) {
            ans += abs(seat[i] - student[i]);
        }

        return ans;
    }
};
```
## Explanation of Code

### Initialization:
We initialize the answer variable `ans` to 0 to keep track of the total minimum moves.

### Sort the Arrays:
We sort both the `seat` and `student` arrays to ensure that the closest seats and students are paired.

### Calculate Minimum Moves:
We iterate through the sorted arrays and calculate the absolute difference between each pair of seat and student. These differences are accumulated in the `ans` variable to get the total minimum moves required.

This approach ensures an efficient and optimal pairing of seats and students to minimize the total moves.

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>
