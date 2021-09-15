#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);

    int ind;

    cin>>ind;

    bool a[4];

    for(int i=1;i<=3;i++){
        a[i] = false;
    }

    a[ind] = true;

    for(int i=1;i<=3;i++){
        int x,y;
        cin>>x>>y;
        if(a[x]){
            a[x] = false;
            a[y] = true;
        }else if(a[y]){
            a[y] = false;
            a[x] = true;
        }
    }

    for(int i=1;i<=3;i++){
        if(a[i]){
            cout<<i;
        }
    }

    return 0;
}
