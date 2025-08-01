//better 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n  =nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};

// optimal(moore voting algo)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt=0 ,el ;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el = nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int count=0;
        for(int i = 0;i<n;i++){
            if(nums[i]==el){
                count++;
            }
        }
        if(count>n/2){
            return el;
        }
        return -1;
    }
};