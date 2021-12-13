#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;

        ll a[n];

        ll one = 0, two = 0, three = 0, total = 0;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            a[i]%=3;
            if(a[i]==1){
                one++;
            }else if(a[i]==2){
                two++;
            }else{
                three++;
            }
            total += a[i];
        }

        if(total%3!=0){
            cout<<-1<<"\n";
        }else{
            ll ans = min(one,two);
            one -= ans;
            two -= ans;
            ans += (one/3)*2 + (two/3)*2;
            cout<<ans<<"\n";
        }      

    }

    return 0;
}
