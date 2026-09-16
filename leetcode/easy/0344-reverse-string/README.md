# Reverse String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

 

 **Example 1:** 

```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

```

 **Example 2:** 

```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is a printable ascii character.

## Solution

**Language:** C++  
**Runtime:** 151 ms (beats 2.06%)  
**Memory:** 27.4 MB (beats 15.54%)  
**Submitted:** 2026-09-16T04:45:22.951Z  

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int left = 0, right = s.size() -1;
        while(left <= right)
        {
            swap(s[left],s[right]);
            left++,right--;
        }

        for(auto x : s)
            cout << x << " " ;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string/)