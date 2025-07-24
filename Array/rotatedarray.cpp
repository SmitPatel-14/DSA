//rotated left array by one 
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int temp =nums[0];
        for(int i=1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
    }
};

//rotated right by d
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        if(n>1){
        vector<int> temp;
        //store in temp
        for (int i=n-k;i<n;i++){
                temp.push_back(nums[i]);
        }
        //rotat the array
        for(int i = n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        //put bake from temp
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
        }
        else{
            
        }
    }
};