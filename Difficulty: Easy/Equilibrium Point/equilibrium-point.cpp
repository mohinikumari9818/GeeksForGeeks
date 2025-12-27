class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=arr[0];
        suffix[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=arr[i]+prefix[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=arr[i]+suffix[i+1];
        }
        for(int i=0;i<n;i++){
            if(prefix[i]==suffix[i]){
                return i;
            }
        }
        return -1;
    }
};