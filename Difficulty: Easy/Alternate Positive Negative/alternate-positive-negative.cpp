// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> pos,neg;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        int posindex=0, negindex=0;
        int i=0;
        while(posindex<pos.size()&& negindex<neg.size()){
            
                arr[i++]=pos[posindex++];
            
                arr[i++]=neg[negindex++];
            
        }
        while(posindex < pos.size()){
            arr[i++] = pos[posindex++];
        }

        // remaining negatives
        while(negindex < neg.size()){
            arr[i++] = neg[negindex++];
        }
        
        // for(int i=0;i<n/2;i++){
        //     arr[2*i]=pos[i];
        //     arr[2*i+1]=neg[i];
        // }
        // return arr;
    }
};