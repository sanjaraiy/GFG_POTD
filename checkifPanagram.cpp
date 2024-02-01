//-------------Panagram checking------------
 bool checkPangram (string &s) {
       
        int n=s.length();
        
        set<char>st;
         int idx;
        for(int i=0;i<n;i++){
           if(s[i]>='a' && s[i]<='z'){
               st.insert(s[i]);
           }else if(s[i]>='A' && s[i]<='Z'){
               st.insert(tolower(s[i]));
           }
        }
        
        if(st.size()==26){
            return true;
        }
        
        return false;
    }