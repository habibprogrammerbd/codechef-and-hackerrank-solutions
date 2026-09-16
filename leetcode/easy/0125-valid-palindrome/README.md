# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 13.93%)  
**Memory:** 11.3 MB (beats 7.68%)  
**Submitted:** 2026-09-16T05:43:53.195Z  

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);



        string s1 = "";
        
        for(int i = 0; i < s.size(); i++)
        {
            if(int(s[i] >= 97 && 122 >= int(s[i])))
                s1 += s[i];
            else if (int(s[i] >= 65 && 90 >= int(s[i])))
            {
                s1 += char(int(s[i])+ 32);
            }
            else if(int(s[i] >= 48 && 57 >= int(s[i])))
            {
                s1 += s[i];
            }

        }

        string s2 = s1;
        reverse(s2.begin(),s2.end());


        if(s1 == s2) return true ;
        else return false;
            
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)