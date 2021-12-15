#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
    }

    for(int i=0;i<n;i++){
        if(i&1){
            cout<<0;
        }else{
            cout<<1;
        }
    }

    return 0;
}
