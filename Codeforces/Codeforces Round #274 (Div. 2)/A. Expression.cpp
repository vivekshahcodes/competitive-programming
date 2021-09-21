#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;

    cin>>a>>b>>c;

    int ans;

    if(a==1 && b==1 && c==1){
        ans = 3;
    }else if(a==1 && b==1){
        ans = 2*c;
    }else if(b==1 && c==1){
        ans = 2*a;
    }else if(a==1 && c==1){
        ans = a+b+c;
    }else if(a==1){
        ans = (a+b)*c;
    }else if(b==1){
        ans = max((a+b)*c,a*(b+c));
    }else if(c==1){
        ans = a*(b+c);
    }else{
        ans = a*b*c;
    }

    cout<<ans;

    return 0;
}
