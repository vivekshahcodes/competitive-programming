#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;

    cin>>k;

    int a[12];

    for(int i=0;i<12;i++){
        cin>>a[i];
    }

    sort(a,a+12,greater<int>());

    if(k==0){
        cout<<0;
    }else{
        int curr = 0, ans = 0;

        for(int i=0;i<12;i++){
            curr += a[i];
            ans++;
            if(curr>=k){
                break;
            }
        }

        if(curr<k){
            cout<<-1;
        }else{
            cout<<ans;
        }
    }

    return 0;
}
