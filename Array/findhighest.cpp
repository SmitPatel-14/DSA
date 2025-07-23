//largest element in array
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = 0;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                largest = nums[i];
            }
        }
        return largest;
    }
};

//second largest element
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
      int n = nums.size();
      int ls =nums[0];
      int sl=-1;
      for(int i=1;i<n;i++){
        if(nums[i]>ls){
            sl = ls;
            ls =nums[i];
        }
        else if(nums[i]<ls && nums[i]>sl){
            sl = nums[i];
        }
        else{
            continue;
        }
      }

      return sl;

    }
};