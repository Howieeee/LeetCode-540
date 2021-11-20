class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int prev = 0, next = 2;
        for(int i=1;i<nums.size()-1;i++){
            if(i==1 && nums[i] != nums[prev]){
                return nums[prev];
            }
            //cout << nums[prev] << " " << nums[i] << " " << nums[next] << endl;
            if(nums[i] != nums[prev] && nums[i] != nums[next]){
                return nums[i];
            }
            if(i==nums.size()-2){
                if(nums[next] != nums[i])
                    return nums[next];
            }
            prev++,next++;
           
        }
        return 1;
    }
};
