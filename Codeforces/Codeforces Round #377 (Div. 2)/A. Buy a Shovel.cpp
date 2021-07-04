#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k;

    cin>>n>>k;

    int ans = 1;

    for(int i=1;i<=10;i++){
        if((n*i)%10==0||((n*i)-k)%10==0){
            break;
        }
        ans++;
    }

    cout<<ans;

    return 0;
}
