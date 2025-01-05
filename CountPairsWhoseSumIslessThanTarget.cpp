// Count Pairs whose sum is less than target

 int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
        
        int i=0;
        int n=arr.size();
        int j=n-1;
        int cnt=0;
        
        while(i<j){
            if(arr[i]+arr[j]>=target) j--;
            else{
                cnt+=j-i;
                i++;
            }
        }
        
        return cnt;
    }