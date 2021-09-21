#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;

    cin>>n;

    map<int,int> m;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        if(input>n){
            ans++;
            continue;
        }
        m[input]++;
        if(m[input]>1){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
