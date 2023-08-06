class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            for(int j=i+1; (j <=i+k) && (j < nums.size()); j++){
                // cout << "i: " << i << "j: " << j << endl;
                if(nums[i] == nums[j]) return true;
            }
        }
        // cout << endl;
        return false;  
    }
};    