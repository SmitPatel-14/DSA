//brute
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                 if(nums[i]>nums[j]){
                     int temp =nums[i];
                     nums[i]=nums[j];
                     nums[j]=temp;
                 }
             }
        }
    }
};

//better
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int c0 = 0 ,c1 = 0,c2=0;
        for(int i = 0;i<n;i++){
            if(nums[i]==0){
                c0++;
            }
            else if(nums[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
            for(int i =0;i<c0;i++){
                nums[i]=0;
            }
            for(int i = c0;i<c0+c1;i++){
                nums[i]=1;
            }
            for(int i =c0+c1 ;i<n;i++){
                nums[i]=2;
            }
        
    }
};

// optimal(dutch natinal flaf algo)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int mid = 0,low=0, high = n-1;
        for(int i=0;i<n;i++){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};