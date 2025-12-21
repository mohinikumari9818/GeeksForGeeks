class Solution {
    int firstoccurence(vector<int>&arr,int x){
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==x){
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
    
    
    int lastoccurence(vector<int>&arr,int x){
        int start=0;
        int end=arr.size()-1;
        int ans1=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==x){
                ans1=mid;
                start=mid+1;
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans1;
    }
    
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int first=firstoccurence(arr,x);
        int last=lastoccurence(arr,x);
        return{first,last};
        
    }
};