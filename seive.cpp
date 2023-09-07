ll spf[1000005];
void buildspf(ll N){
    for(int i=0;i<=N;i++){
        spf[i]=i;
    }
    for(int i=2;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            if(spf[j]==j){
                spf[j]=i;
            }
        }
    }
    return;
}
ll getfactors(ll x){
   ll factors=0;
   while(x>1){
    ll idhar=spf[x];
    factors++;
    while(x>1&&(x%idhar==0)){
        x=x/idhar;
    }
   }
    return factors;
}
