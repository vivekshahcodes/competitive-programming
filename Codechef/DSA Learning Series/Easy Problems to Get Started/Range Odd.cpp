#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int l,r;

    cin>>l>>r;

    for(int i=l;i<=r;i++){
        if(i&1){
            cout<<i<<" ";
        }
    }

    return 0;
}
