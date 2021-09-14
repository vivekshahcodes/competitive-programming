#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,d;

    cin>>n>>d;

    int a[n], timeDevu = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        timeDevu += a[i];
    }

    timeDevu += (n-1)*10;

    int ans = 0;

    if(timeDevu<=d){
        ans+=(n-1)*2;
        int x = d-timeDevu;
        ans+=x/5;
        cout<<ans;
    }else{
        cout<<-1;
    }

    return 0;
}
