#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    bool ans = false;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        if(input==k){
            ans = true;
        }
    }

    if(ans){
        cout<<1;
    }else{
        cout<<-1;
    }

    return 0;
}
