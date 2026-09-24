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