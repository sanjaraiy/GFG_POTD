//--------------Recamans sequence----------------
 int  solve(vector<int>&v,int n,unordered_map<int,bool>&freq){
        if(n==0){
        
            v.push_back(n);
             freq[n]=true;
            return v.back();
        }
         
        
        int ans=solve(v,n-1,freq);
        if((ans-n)>0){
            
              ans=ans-n;
            if(freq[ans]!=true){
              freq[ans]=true;
             v.push_back(ans);
             
            }else{
               ans=ans+(2*n);
               freq[ans]=true;
               v.push_back(ans);
            }
        }else{
            ans=ans+n;
            freq[ans]=true;
            v.push_back(ans);
        }
        
        return v.back();
        
      
        
        
    }
    vector<int> recamanSequence(int n){
        // code here
        vector<int>v;
        unordered_map<int,bool>freq;
        
        solve(v,n,freq);
        
        return v;
    }