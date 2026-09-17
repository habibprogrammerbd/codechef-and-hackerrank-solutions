# Reverse Words in a String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an input string `s`, reverse the order of the  **words**.

A  **word**  is defined as a sequence of non-space characters. The  **words**  in `s` will be separated by at least one space.

Return  *a string of the words in reverse order concatenated by a single space.* 

 **Note**  that `s` may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

 **Example 1:** 

```
Input: s = "the sky is blue"
Output: "blue is sky the"

```

 **Example 2:** 

```
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

```

 **Example 3:** 

```
Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

```

 

 **Constraints:** 

- 1 <= s.length <= 104
- s contains English letters (upper-case and lower-case), digits, and spaces ' '.
- There is at least one word in s.

 

 **Follow-up:** If the string data type is mutable in your language, can you solve it  **in-place**  with `O(1)` extra space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.3 MB (beats 63.34%)  
**Submitted:** 2026-09-17T03:49:50.094Z  

```cpp
class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        
        string ans;
        string s1 = "";
        bool x = true;
        for(int i = s.size() -1; i >= 0; i--)
        {
            if(s[i] != ' ')
            {
                s1 += s[i];
                x = false;
            }

            if((s[i] == ' ' || i == 0 ) && x == false)
            {
                reverse(s1.begin(),s1.end());
                ans += ' ' + s1;
                s1.clear();
                x = true;
            }

        }
        string final_ans = "";
        for(int  i = 1; i < ans.size(); i++)
        {
            final_ans += ans[i];
        }
    
        return final_ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-words-in-a-string/)