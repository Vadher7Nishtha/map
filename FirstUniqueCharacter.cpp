class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> freqMap;
        
       
        for (char c : s) 
        {
            freqMap[c]++;
        }
        
       
        for (int i = 0; i < s.size(); ++i) 
        {
            if (freqMap[s[i]] == 1) 
            {
                return i;
            }
        }
        
       
        return -1;
    }
};
