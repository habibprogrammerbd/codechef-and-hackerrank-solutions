# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers `nums`, return  *the length of the longest consecutive elements sequence.* 

You must write an algorithm that runs in `O(n)` time.

 

 **Example 1:** 

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

 **Example 2:** 

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

 **Example 3:** 

```
Input: nums = [1,0,1,2]
Output: 3

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 158 ms (beats 6.63%)  
**Memory:** 95 MB (beats 5.22%)  
**Submitted:** 2026-09-17T06:46:21.071Z  

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(nums.size() == 0) return 0;

        set<int> st;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        
        for(auto x : st)
        {
            ans.push_back(x);
            st.erase(x);
        }

        sort(nums.begin(),nums.end());

        int x = ans[0];
        int ans_count = 0;
        int count = 0;

        for(int i = 0; i < ans.size(); i++)
        {
            if(ans[i] == x)
            {
                count++;
                x++;
            }
            else
            {
                x = ans[i];
                count = 1;
                x++;
            }

            if(ans_count < count)
            {
                ans_count = count;
            }
        }

        return ans_count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)