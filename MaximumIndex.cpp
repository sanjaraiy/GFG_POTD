//-----------------------------Maximum Index-----------------------
// int maximumIndex(int arr[],int n){
//     int ans=INT_MIN;
//     vector<int>v(n,0);
//     v[n-1]=arr[n-1];
//     for(int i=n-2;i>=0;i--){
//         v[i]=max(arr[i],v[i+1]);
//     }

//     int i=0;
//     int j=0;
//     while(i<n && j<n){
//         if(arr[i]<=v[j]){
//             ans=max(ans,j-i);
//             j++;
//         }esle{
//             i++;
//         }
//     }

//     return ans;
// }