class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
            for (int i = 0; i < nums.size(); i++) {
                for (int j = i + 1; j < nums.size(); j++) {  // เห็นสามเหลี่ยมไหมละพวกนาย โครตสวยเลย O(n2) 📐 
                    if (nums[i] + nums[j] == target){ // that we call an art! 📐 
                        return {i, j};
                    }
                }
            }
            return {}; // running slow, but the shape of the code look good, so i take it.
    }
};
