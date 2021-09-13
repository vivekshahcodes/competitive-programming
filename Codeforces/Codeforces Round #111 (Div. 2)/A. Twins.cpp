#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n], total = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        total += a[i];
    }

    int req = total/2;

    sort(a,a+n,greater<int>());

    int ans = 0, curr =0;

    for(int i=0;i<n;i++){
        curr+=a[i];
        ans++;
        if(curr>req){
            break;
        }
    }

    cout<<ans;

    return 0;
}
