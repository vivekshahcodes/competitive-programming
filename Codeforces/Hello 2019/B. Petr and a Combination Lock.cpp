#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<(1<<n);i++){

        int x = i, ans = 0;

        for(int j=0;j<n;j++){
            if(x&(1<<j)){
                ans += a[j];
            }else{
                ans -= a[j];
            }
        }

        if(ans%360==0){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
