class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0; // Pointer for the next valid position
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j] = nums[i]; // Move valid element to front
                j++;
            }
        }
    return j; // j = number of valid elements (new length)
    }
};