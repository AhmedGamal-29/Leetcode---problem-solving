class Solution {
public:
    string reverseWords(string s) {
        
        //vector to hold each word in string
        vector<string> v;
        string word="";
 
        for (int i=0;i<s.length();i++) 
        {
            if (s[i] == ' ')
            {
                v.push_back(word);
                word = "";
            }
            else 
            {
                word += s[i];
            }
        }
        
        //last word in string
         v.push_back(word);
        
        
        //swap each word in string
        for(int i=0;i<v.size();i++)
        {
            string current =v[i];
            int k=0, j=current.size()-1;
            while(k<j)
            {
                swap(current[k],current[j]);
                k++;
                j--;
            }
            
            v[i]=current;
        }
        
        //hold result in string
        string result="";
        for(int i=0;i<v.size();i++)
        {
            result+= v[i];
            if(i!=v.size()-1)
                result+=" ";
        }
        
        return result;
        
    }
};