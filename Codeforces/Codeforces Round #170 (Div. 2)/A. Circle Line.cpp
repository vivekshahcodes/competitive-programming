#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int a[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int s,d;

    cin>>s>>d;

    int ans1 = 0, ans2 = 0;

    if(s<d){
        for(int i=s;i<d;i++){
            ans1 += a[i];
        }

        for(int i=s-1;i>=1;i--){
            ans2 += a[i];
        }

        for(int i=n;i>=d;i--){
            ans2 += a[i];
        }
    }else{

        for(int i=s-1;i>=d;i--){
            ans1 += a[i];
        }

        for(int i=s;i<=n;i++){
            ans2 += a[i];
        }

        for(int i=1;i<d;i++){
            ans2 += a[i];
        }
    }

    cout<<min(ans1,ans2);

    return 0;
}
