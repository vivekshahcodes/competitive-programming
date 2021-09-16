#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int ans = 0, total = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        total+=input;
    }

    for(int i=1;i<=5;i++){
        if((total+i)%(n+1)!=1){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
