# Valid Anagram

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  s = "anagram", t = "nagaram"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "rat", t = "car"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

 

 **Follow up:**  What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 44.92%)  
**Memory:** 9.3 MB (beats 99.88%)  
**Submitted:** 2026-09-17T04:04:38.993Z  

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s == t) return true;
        else return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)