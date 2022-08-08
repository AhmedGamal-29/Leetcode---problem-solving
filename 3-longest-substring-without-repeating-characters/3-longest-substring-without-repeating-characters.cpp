class Solution 
{
public:
        
    
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.length();
        int i=0, j=0;
        int max_len=0;
        set <char> set_chars;
        while(j< n)
        {
            if(set_chars.count(s[j])==0)
            {
                set_chars.insert(s[j]);
                max_len=max(max_len,(int)set_chars.size());
                j++;
            }
            else
            {
                set_chars.erase(s[i]);
                i++;
            }
            
        }
        
        
        return max_len;
    }
};