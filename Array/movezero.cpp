
//brut force
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        //non zero in temp
        for(int i =0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        //non zero in og array
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        //zero in last
        for(int i = temp.size();i<n;i++){
            nums[i]=0;
        }
    }
};