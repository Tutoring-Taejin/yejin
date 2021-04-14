class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        
        int n = nums.size();
        
        for ( int i = 0; i < n; i++ ){
            for ( int j = i + 1; j < n; j++ ){
                if( nums[j] == target - nums[i] ){
                    output.push_back( i );
                    output.push_back( j );
                    return output;
                }
            }
        }
        
        return vector<int>();
    }
};
