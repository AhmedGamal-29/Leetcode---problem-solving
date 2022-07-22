class Solution {
public:
    int firstUniqChar(string s) {
        
        //initialize array of counters with zeros
        int count[125]={0};
        
        //count of each char in the string 
        for(int i=0;i<s.length();i++)
            count[s[i]]++;
        
        //check count of each char
        for(int i=0;i<s.length();i++)
        {
            if(count[s[i]]==1)
                return i;
        }
        
        //there is no unique char in string 
        return -1;
}
};