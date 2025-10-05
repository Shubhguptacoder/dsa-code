class Solution {
public:
    int triangleNumber(vector<int>& arr) {
          int ans = 0 ;
          int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int k=n-1;k>=2;k--){
            int i = 0 ;
            int j = k-1;
            
            while(i<j){
                if(arr[i]+arr[j]>arr[k]){
                    ans+=(j-i);
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return ans;
    }
};
