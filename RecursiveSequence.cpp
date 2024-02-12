//---------------------Recursive Sequence-------------------
long long sequence(int n){
        // code here
        long long ans=1,temp=2,Mod=1e9+7;
        int i=2;
        while(i<=n){
            int j=i;
            long long temp2=1;
            while(j--){
                temp2*=temp;
                temp2%=Mod;
                temp++;
                
            }
            ans+=temp2;
            ans%=Mod;
            i++;
        }
        
        return ans;
        
        
    }