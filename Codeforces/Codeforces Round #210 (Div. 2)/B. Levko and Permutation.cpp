#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    if(k>n-1){
        cout<<-1;
    }else{
        for(int i=1;i<=n-k;i++){
            if(i==n-k){
                cout<<1<<" ";
            }else{
                cout<<i+1<<" ";
            }
        }

        for(int i=n-k+1;i<=n;i++){
            cout<<i<<" ";
        }
    }

    return 0;
}
