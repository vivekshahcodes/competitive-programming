#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int x = 0, y = INT_MAX;

    for(int i=0;i<n;i++){

        int a,b;
        cin>>a>>b;

        int c = min(a,b);
        int d = max(a,b);

        x = max(c,x);
        y = min(d,y);
    }

    int ans;

    if(x>y){
        cout<<-1;
    }else{
        
        if(k>=x && k<=y){
            ans = 0;
        }else{
            ans = min(abs(k-x),abs(k-y));
        }

        cout<<ans;
    }

    return 0;
}
