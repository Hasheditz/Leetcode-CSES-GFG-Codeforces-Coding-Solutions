## Editorial: Weird Algorithm

### Problem Statement
You are given a positive integer \( n \). You need to perform the following operations until \( n \) becomes 1:
1. If \( n \) is even, divide it by 2.
2. If \( n \) is odd, multiply it by 3 and add 1.

Your task is to print all the integers that appear while performing these operations.

[Problem Link](https://cses.fi/problemset/task/1068/)

### Approach
This problem can be solved straightforwardly using a while loop. We continuously perform the given operations until \( n \) becomes 1, printing each \( n \) along the way.

### Code Explanation
1. We take the input \( n \).
2. While \( n \) is not equal to 1, we do the following:
    - Print the current value of \( n \).
    - If \( n \) is even, divide it by 2.
    - If \( n \) is odd, multiply it by 3 and add 1.
3. After the loop ends, we print 1.

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n;cin>>n;
 
    while(n != 1)
    {
        cout<<n<<" ";
        if(n%2==0) n =  n/2;
        else n = 3*n+1;
    }
 
    cout<<1<<" ";
    return 0;
}
```

### Complexity Analysis
- **Time Complexity:** The time complexity of this approach is \( O(\log n) \) because \( n \) is halved in each step, leading to a logarithmic number of steps.
- **Space Complexity:** This approach has a constant space complexity \( O(1) \).

### Contribution Request
If you have a better solution or any optimizations to improve the efficiency of the solution, please contribute by submitting your solution to the problem on the CSES platform or by providing your code in the comments. Your contributions are valuable and help improve the learning experience for others. 

Feel free to share your insights and alternative approaches!
