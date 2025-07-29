//brute
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                temp.push_back(count);
                count = 0;
            }
        }
          if (count > 0) {
            temp.push_back(count);
        }
        if (temp.empty()) return 0;
        int high = temp[0] ;
        for(int i =1;i<temp.size();i++){
            if(temp[i]>high){
                high = temp[i];
            }
        }
        return high;
    }
};

//optimal
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n  = nums.size();
        int maxi = 0;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]==1){
                count ++;
                maxi = max(maxi,count);
            }
            else{
                count = 0;
            }
        }
        return maxi;
    }
};
