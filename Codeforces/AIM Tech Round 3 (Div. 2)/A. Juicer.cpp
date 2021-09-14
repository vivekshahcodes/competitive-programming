#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k,d;

    cin>>n>>k>>d;

    int ans = 0, waste = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;

        if(input<=k){
            waste+=input;
        }

        if(waste>d){
            waste = 0;
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
