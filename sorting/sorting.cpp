class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = nums; // correct way to copy the vector

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (ans[j] < ans[minIndex]) {
                    minIndex = j;
                }
            }
            // swap after finding the correct minIndex
            int temp = ans[i];
            ans[i] = ans[minIndex];
            ans[minIndex] = temp;
        }

        return ans;
    }
};

//bubble Sort 
void bubblesort(int arr[], int n) {
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Insertion Sort
void Insertionsort(int arr[,int n]){
    for(int i=0;i<n;i++){
        int j =i;
        while(j>0 &&arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}