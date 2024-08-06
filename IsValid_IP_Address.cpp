//=========================== Is Valid IP Address ====================
int isValid(string str) {
        // code here
        int temp=-1;
        int idx=-1;
        int k=0;
        
        for(int i=0;i<str.length();i++){
            if(str[i]=='.'){
                 k++;
                if(temp<0 || temp>255) return false;
                if(temp!=0 && str[idx+1]=='0') return false;
                idx=i;
                temp=-1;
            }else{
                if(temp==-1) temp=0;
                
                temp=temp*10+(str[i]-'0');
            }
        }
        
                if(temp<0 || temp>255 || k!=3) return false;
                if(temp!=0 && str[idx+1]==0) return false;
                
                return true;
    }