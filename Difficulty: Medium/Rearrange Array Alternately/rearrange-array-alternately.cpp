class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int minindex=0;
        int maxindex=n-1;
        int maxele=arr[n-1]+1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]+=(arr[maxindex] % maxele)*maxele;
                maxindex--;
            }
            else{
                arr[i]+=(arr[minindex]% maxele)*maxele;
                minindex++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]/=maxele;
        }
    }
};