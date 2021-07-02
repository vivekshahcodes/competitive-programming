#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k;

    cin>>n>>k;

    int time = k, ans = 0;

    for(int i=1;i<=n;i++){
        time += i*5;
        if(time<=240){
            ans++;
        }else{
            break;
        }
    }

    cout<<ans;

    return 0;
}
