bool p[90000005] = {false};

void sieve(){

    for(ll i=3;i<=90000000;i+=2){
        p[i] = true;
    }

    for(ll i=3;i*i<=90000000;i+=2){
        if(p[i]==true){
            for(ll j=i*i;j<=90000000;j+=i){
                p[j] = false;
            }
        }
    }

    p[2] = true;
    p[0] = p[1] = false;
}
