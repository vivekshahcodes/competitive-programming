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

        ll n, ans = 0;

        cin>>n;

        while(n%2==0){
            n/=2;
            ans++;
        }

        while(n%3==0){
            n/=3;
            ans+=2;
        }

        while(n%5==0){
            n/=5;
            ans+=3;
        }

        if(n==1){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }

    return 0;
}
