class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] =='(' || s[i]=='{' || s[i]=='[')
            {
                res.push(s[i]);
            }
            else if(s[i]==')')
            {
                 if(i==0 || res.empty() || res.top()!='(')
                {
                 return false;
                 }
            res.pop();
                
            }
            else if(s[i]=='}')
            {
                 if(i==0 || res.empty() || res.top()!='{')
                {
                 return false;
                 }
            res.pop();
                
            }
            else if(s[i]==']')
            {
                 if(i==0 || res.empty() || res.top()!='[')
                {
                 return false;
                 }
            res.pop();
                
            }
           
        
        }
        
        return res.empty();
        
    }
};