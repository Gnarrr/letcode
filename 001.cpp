class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        for(int i = 0 ; i < (nums.size()-1); i++) {
            for (int j = i+1 ; j < nums.size() ; j++) {
                if ((nums[i] + nums[j]) == target) {
                    cout << "[" << i << ", " << j << "]" << endl;
                    ret.push_back(i);
                    ret.push_back(j);
                    break;
                }
            }
        }
        return ret;
    }
};