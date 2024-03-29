The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

Example 1:
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

Example 2:
Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.


||==============================>Solution<==============================||

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fibonacci Number.
Memory Usage: 6 MB, less than 39.89% of C++ online submissions for Fibonacci Number.

Approch: 1 Recursive TC-> O(2N)
  
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return fib(n-2)+fib(n-1);
    }
};

Approch: 2 Dynamic Programming TC-> O(N)
 
class Solution {
public:
    int fib(int N) {
        if(N < 2) return N;
        int memo[N+1];
        memo[0] = 0;
        memo[1] = 1;
        for(int i=2; i<=N; i++)
            memo[i] = memo[i-1] + memo[i-2];
        return memo[N];
    }
};
