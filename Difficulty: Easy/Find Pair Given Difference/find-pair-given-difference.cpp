
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int first=0;
        int last=1;
        while(last<n){
            int diff=(arr[last]-arr[first]);
            if(diff==x && first!=last){
                return true;
            }
            else if(diff>x){
                first++;;
            }
            else{
                last++;
            }
            
            if (first == last) last++;  
                
        }
        return false;
    }
};
