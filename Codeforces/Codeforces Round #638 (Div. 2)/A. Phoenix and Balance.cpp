#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        int c = 2, ans = 0;

        for(int i=1;i<=n/2;i++){
            ans += c;
            c*=2;
        }

        cout<<ans<<endl;

    }

    return 0;

}
