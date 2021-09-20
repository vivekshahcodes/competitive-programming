#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    if(n==1 && k==10){
        cout<<-1;
    }else{
        string ans;
        if(k==10){
            ans += "1";
            for(int i=1;i<n;i++){
                ans+="0";
            }
        }else{
            ans+=to_string(k);
            for(int i=0;i<n-2;i++){
                ans+="0";
            }

            if(n>=2){
                ans+=to_string(k);
            }
        }

        cout<<ans;
    }

    return 0;
}
