#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b;

    cin>>a>>b;

    if(a==1 && b==1){
        cout<<0;
        return 0;
    }

    int ans = 0;

    while(a>0 && b>0){

        if(a<b){
            a++;
            b-=2;
            ans++;
        }else{
            b++;
            a-=2;
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
