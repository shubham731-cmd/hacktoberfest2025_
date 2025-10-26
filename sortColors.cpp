class Solution {
public://time->O(N), space->O(1)
    void sortColors(vector<int>& nums) {  // l
        int n=nums.size();                // 0 1 0 2 1 2 0
        int low=0,mid=0,high=n-1;         // m           h
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
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


        //time->O(3N), space->O(N)

        // vector<int>v;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         v.push_back(0);
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==1){
        //         v.push_back(1);
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==2){
        //         v.push_back(2);
        //     }
        // }
        // nums=v;
    }
};
