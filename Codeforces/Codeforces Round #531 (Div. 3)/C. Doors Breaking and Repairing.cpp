#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x,y;

    cin>>n>>x>>y;

    int a[n];
    int c = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=x){
            c++;
        }
    }

    if(x>y){
        cout<<n;
    }else{
        cout<<(c+1)/2;
    }

    return 0;
}
