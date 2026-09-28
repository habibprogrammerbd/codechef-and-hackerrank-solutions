# Count Occurences of Anagrams

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a word  **pat**  and a text  **txt**. Return the count of the occurrences of anagrams of the word in the text.

 **Example 1:** 

```
Input: txt = "forxxorfxdofr", pat = "for"
Output: 3
Explanation: for, orf and ofr appears in the txt, hence answer is 3.

```

 **Example 2:** 

```
Input: txt = "aabaabaa", pat = "aaba"
Output: 4
Explanation: aaba is present 4 times in txt.

```

 **Constraints:** 
1 <= |pat| <= |txt| <= 105
Both strings contain lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T08:41:03.074Z  

```cpp
class Solution {
  public:
    int search(string &pat, string &txt) {
        
        map<char,int> st;
        for(int i = 0; i < (int)pat.size(); i++)
        {
            st[pat[i]]++;
        }
        
        
        int frist = 0,sec = 0,sum = 0,ans = 0;
        
        while(sec < (int)txt.size())
        {
            
            
            if(sec - frist + 1 == (int)pat.size())
            {
                
                if(st.find(txt[sec]) != st.end())
                {
                    st[txt[sec]]--;
                    if(st.find(txt[sec])->second == 0) sum++;
                }
                
                if( (int)st.size() == sum) ans++;
                
        
                if(st.find(txt[frist]) != st.end())
                {
                    if(st.find(txt[frist])->second == 0) sum--;
                    st[txt[frist]]++;
                }
                
                
                
                frist++,sec++;
            }
            else
            {
                if(st.find(txt[sec]) != st.end())
                {
                    st[txt[sec]]--;
                    if(st.find(txt[sec])->second == 0) sum++;
                }
                
                sec++;
            }
            
            
            // if(pat.size() == sum) ans++;
        }
        
        return ans;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1)