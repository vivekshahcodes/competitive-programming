ll p[1000005] = {0};

void sieve(){

    for(ll i=3;i<=1000000;i+=2){
        p[i] = 1;
    }

    for(ll i=3;i*i<=1000000;i+=2){
        if(p[i]==1){
            for(ll j=i*i;j<=1000000;j+=i){
                p[j] = 0;
            }
        }
    }

    p[2] = 1;
    p[0] = p[1] = 0;
}
