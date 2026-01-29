class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cont = 1;
        int ret = 0;
        for(int i = 0; i < nums.size(); i ++) {
            cont = 1;
            for (int j = i+1; j < nums.size(); j ++) {
                if(nums[i] == nums[j]) {
                    cont ++;
                }
            }
            if(cont > ceil(floor(nums.size()/2))) {
                ret = nums[i];
                return ret;
            }
        }
        return ret;
    }
};