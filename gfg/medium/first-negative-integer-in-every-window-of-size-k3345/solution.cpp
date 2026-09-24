class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        
        int frist = 0,sec = 0;
        vector<int> ans;
        queue<int> qu;
        
        while(sec < arr.size())
        {
            if(arr[sec] < 0)
            {
                qu.push(arr[sec]);
            }
            
            if(sec - frist + 1 == k)
            {
                if(!qu.empty())
                {
                    ans.push_back(qu.front());
                    
                    if(qu.front() == arr[frist])
                    {
                        qu.pop();
                    }
                    
                }
                else
                {
                    ans.push_back(0);
                }
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