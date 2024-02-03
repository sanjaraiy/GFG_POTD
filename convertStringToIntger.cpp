 //---------------------Implement Atoi function---------------------------
//  int atoi(string s) {
//         //Your code here
//         int n=s.length();
//         for(int i=n-1;i>=1;i--){
//             if(s[i]<'0' || s[i]>'9'){
//                 return -1;
//             }
//         }
//         bool flag=true;
//         if(s[0]=='-'){
//             flag=false;
//         }else
//         if(s[0]<'0' || s[0]>'9'){
//             return -1;
//         }
//         int ans=0;
//         int power=1;
//         if(flag==false){
//          for(int i=n-1;i>=1;i--){
//             ans+=(s[i]-'0')*power;
//             power*=10;
//           }
//         }else{
//             for(int i=n-1;i>=0;i--){
//             ans+=(s[i]-'0')*power;
//             power*=10;
//           }
//         }
//     if(flag==false){
//             return -ans;
//         }
//         return ans;
//     }