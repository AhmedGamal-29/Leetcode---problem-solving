class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count_ransom[125]={0};
        int count_magazine[125]={0};
        
        //count each char in ransomNote
        for(int i=0;i<ransomNote.length();i++)
        {
            count_ransom[ransomNote[i]]++;
        }
        
        //count each char in magazine
        for(int i=0;i<magazine.length();i++)
        {
            count_magazine[magazine[i]]++;
        }
        
        bool flag=true;
        for(int i=0;i<ransomNote.length();i++)
        {
            
            //check if can construct ransomNote by magazine letters
            if(count_ransom[ransomNote[i]]> count_magazine[ransomNote[i]])
            {
                flag = false;
                break;
            }
        }
        return flag;
        
    }
};