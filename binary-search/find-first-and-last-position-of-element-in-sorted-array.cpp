class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        if(nums.size() == 0){
            return {-1,-1};
        }

        int first = result(nums,target,true);
        if(first == -1){
            return {-1,-1};
        }

        int last = result(nums,target,false);

        return {first,last};
    }

    int result(vector<int>& nums, int target,bool isFirst){
        int start = 0;
        int end = nums.size() - 1;
        int bound = -1;

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(nums[mid] == target){
                bound = mid;
                if(isFirst){
                    end = mid-1;
                }
                else{
                    start = mid + 1;
                }
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return bound;
    }
};