class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int first=0;
        int last=n-1;
        while(first<last){
            int sum=arr[first]+arr[last];
            if(sum==target){
                return true;
            }
            else if(sum>target){
                last--;
            }
            else{
                first++;
            }
            if(n==1){
                return false;
            }
        }
        return false;
    }
};