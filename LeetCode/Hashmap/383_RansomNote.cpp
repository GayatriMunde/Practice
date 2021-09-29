class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> count;
        
        for (int i = 0; i < ransomNote.length(); i++){
            count[ransomNote[i]]++;
        }
        
        for (int i = 0; i < magazine.length(); i++){
            count[magazine[i]]--;
        }
        
        for (auto itr: count){
            if (itr.second > 0)
                return false;
        }
        
        return true;
    }
};