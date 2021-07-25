//Que:
//https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int count = -1;
        double current = 0, prev = 0;
        int length = nums1.size() + nums2.size();
        bool flag = length % 2 == 0 ? true : false;
        int mid = length / 2;
        
        int i = 0, j = 0;
        double median;
        while (i < nums1.size() && j < nums2.size()){
            //cout << prev << " " << current << endl;
            if (nums1[i] <= nums2[j]){
                prev = current;
                current = nums1[i++];
            }
            else if (nums1[i] > nums2[j]){
                prev = current;
                current = nums2[j++];
            }
            count++;
            if (count == mid){
                if (flag){
                    return (prev + current) / 2;
                }
                else
                    return current;
            }
        }
        
        while (i < nums1.size()){
            //cout << prev << " " << current << endl;
            prev = current;
            current = nums1[i++];
            count++;
            if (count == mid){
                if (flag){
                    return (prev + current) / 2;
                }
                else
                    return current;
            }
        }
        
        while (j < nums2.size()){
            //cout << prev << " " << current << endl;
            prev = current;
            current = nums2[j++];
            count++;
            if (count == mid){
                if (flag){
                    return (prev + current) / 2;
                }
                else
                    return current;
            }
        }
        
        return -1;
    }
};