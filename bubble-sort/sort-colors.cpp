class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        int idx = 0;
        for(auto const& [key,val] : freq){
            for(int i=0;i<val;i++){
                nums[idx++] = key;
            }
        }
    }
};