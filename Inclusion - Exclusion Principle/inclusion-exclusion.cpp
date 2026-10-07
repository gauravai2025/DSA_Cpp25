 bool inclusionExclusion(long long int mid,long long int k,vector<int>& coins){

        // prepare bitmask;
        long long int cnt=0;
        int size=coins.size();
        
        for(int i=1;i<(1<<size);i++){
            int cntbit=0;
            long long int lcm=-1;
            for(int j=0;j<size;j++){
                if(i&(1<<j)){
                    cntbit++;

                    if(lcm==-1)
                    lcm=coins[j];
                    else
                    lcm=(lcm*coins[j])/__gcd(lcm,1ll*coins[j]);
                }
            }

           if(cntbit&1)
           cnt+=mid/lcm; 
           else
           cnt-=mid/lcm;
        }
        return cnt>=k;
    }