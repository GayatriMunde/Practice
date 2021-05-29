class Solution {
public:
    void swapAll(vector<char>& s, int left, int right){
        if (left > right)   return;
        int size = s.size();
        swap(s[left++], s[right--]);
        swapAll(s, left, right);
    }
    
    void reverseString(vector<char>& s) {
        swapAll(s, 0, s.size() - 1);
    }
};