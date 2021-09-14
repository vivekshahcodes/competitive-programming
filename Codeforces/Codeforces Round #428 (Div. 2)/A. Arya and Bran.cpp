#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int ans = 0, candies = 0, prev = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        int x = input + prev;
        candies += min(8,x);
        prev = x-min(8,x);
        ans++;
        if(candies>=k){
            break;
        }
    }

    if(candies<k){
        cout<<-1;
    }else{
        cout<<ans;
    }

    return 0;
}
