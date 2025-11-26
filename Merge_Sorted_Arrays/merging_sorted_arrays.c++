#include <algorithm>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> temp(m + n);
        if(n == 0) {
            ;
        }else if(m == 0 && n != 0) {
            for(int k = 0; k < n; k++){
                nums1[k] = nums2[k];
            }
        }else {
            // Copy nums1's m elements
            for (int i = 0; i < m; i++) {
                temp[i] = nums1[i];
            }
            // Copy nums2's n elements
            for (int i = 0; i < n; i++) {
                temp[m + i] = nums2[i];
            }
            sort(temp.begin(), temp.end()); 
            // Now sort the full array
            // Copy back to nums1
            for (int i = 0; i < m + n; i++) {
                nums1[i] = temp[i];
            }
        }
    }
};