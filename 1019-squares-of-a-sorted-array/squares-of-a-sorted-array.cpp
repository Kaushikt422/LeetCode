class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        int left=0;
        int right=n-1 , index=n-1 ;
        vector<int> result(n);

        while(left<=right){

            int leftsquare = nums[left]* nums[left];
            int rightsquare = nums[right]*nums[right];

            if (leftsquare > rightsquare){
                result[index--] = leftsquare;
                left++;
            }
            else{
                result[index--] =rightsquare;
                right--;
            }
            
        }
        
        return result;
    }
};