 // Indexes of Subarray Sum

//  vector<int> subarraySum(vector<int> &arr, int target) {
       
//         int s=0,e=0;
//         int sum=0;
//         vector<int>ans;
//         for(int i=0;i<arr.size();i++){
//             sum+=arr[i];
//            // if(sum<target) // ignore
//            if(sum>=target){
//                e=i;
//                while(sum>target){
//                    sum-=arr[s];
//                    ++s;
//                }
//                if(sum==target){
//                    ans.push_back(s+1);
//                    ans.push_back(e+1);
//                    return ans;
//                }
//            }
//         }
//         return {-1};
//     }
