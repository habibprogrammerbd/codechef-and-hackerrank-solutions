# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `x`, return `true` if `x` is a  **palindrome**, and `false` otherwise.

 

 **Example 1:** 

```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

```

 **Example 2:** 

```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

```

 **Example 3:** 

```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

 

 **Follow up:**  Could you solve it without converting the integer to a string?

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 15.52%)  
**Memory:** 10.9 MB (beats 7.07%)  
**Submitted:** 2026-09-14T18:02:20.603Z  

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string s2 = s;
        reverse(s2.begin(),s2.end());

        if(s == s2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)