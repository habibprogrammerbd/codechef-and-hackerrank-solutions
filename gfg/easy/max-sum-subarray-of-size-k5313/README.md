# Max Sum Subarray of size K

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers **arr[]**  and a number **k**. Return the maximum sum of a subarray of size k.

 **Note:**  A subarray is a contiguous part of any given array.

 **Examples:** 

```
Input: arr[] = [100, 200, 300, 400], k = 2
Output: 700
Explanation: arr2 + arr3 = 700, which is maximum.
```

```
Input: arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output: 39
Explanation: arr1 + arr2 + arr3 + arr4 = 39, which is maximum.

```

```
Input: arr[] = [100, 200, 300, 400], k = 1
Output: 400
Explanation: arr3 = 400, which is maximum.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-24T08:13:08.275Z  

```cpp
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        
        long long int frist = 0, sec = 0, ans = 0, mx = 0;
        
        while(sec < arr.size())
        {
            mx+=arr[sec];
            if(sec - frist + 1 == k)
            {
                ans = max(ans , mx);
                mx-=arr[frist];
                frist++,sec++;
            }
            else
            {
                sec++;
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1)