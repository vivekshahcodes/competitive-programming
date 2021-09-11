#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a,b;

    cin>>a>>b;

    int x = min(a,b);

    b = max(a,b);
    a = x;

    int ans = 0, t = 1;
    bool flagA = true;

    while(a!=b){
        if(flagA){
            flagA = false;
            ans += t;
            a++;
        }else{
            flagA = true;
            ans += t;
            b--;
            t++;
        }
    }

    cout<<ans;

    return 0;
}
