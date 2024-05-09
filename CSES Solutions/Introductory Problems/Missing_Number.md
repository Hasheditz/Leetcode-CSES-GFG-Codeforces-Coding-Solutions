## Finding the Missing Number

**Question**: [Missing Number](https://cses.fi/problemset/task/1083/)

### Approach Overview
The provided code offers a straightforward approach to solve this problem. Let's break down how it works.

### Code Explanation
The given solution, written in C++, follows these steps:

1. **Input and Calculation**: 
   - We input the value of n, representing the total number of elements in the sequence (excluding the missing one).

2. **Sum Calculation**:
   - We iterate through the sequence of n-1 integers and calculate their sum, storing it in `psum`.

3. **Find Missing Number**:
   - Using the formula for the sum of consecutive integers, `sum = (n * (n + 1)) / 2`, we calculate the sum of all numbers from 1 to n.
   - The missing number is the difference between this expected sum and the sum of the given numbers.

4. **Output**:
   - We output the missing number.

### Complexity Analysis
- **Time Complexity**: O(n), where n is the total number of elements in the sequence. The loop iterates through n-1 elements to calculate the sum of the given numbers.
  
- **Space Complexity**: O(1). The solution utilizes a constant amount of extra space for variables, independent of the input size.

### Code

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long psum = 0;
    for(int i = 0; i < n-1; i++) {
        long long x;
        cin >> x;
        psum += x;
    }
    long long sum = (n * (n + 1)) / 2;
    cout << sum - psum;
}
```
## Contribution and Support
I always encourage contributors to participate in the discussion forum for this repository.

If you have a better solution or any queries/discussions related to the Problem of the Day solution, please visit our discussion section. We welcome your input and aim to foster a collaborative learning environment.

If you find this solution helpful, consider supporting us by giving a ⭐ star to the [repository](https://github.com/Hasheditz/leetcode-solutions).
