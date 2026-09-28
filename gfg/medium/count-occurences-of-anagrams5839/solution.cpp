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