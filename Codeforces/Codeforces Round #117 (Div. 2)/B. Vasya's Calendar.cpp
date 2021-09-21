#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int d,n;

    cin>>d>>n;

    int ans = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        if(i!=n-1){
            ans += d-input;
        }
    }

    cout<<ans;

    return 0;
}
