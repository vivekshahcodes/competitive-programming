#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n];
    map<int,int> m;

    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }

    sort(a,a+n);
    int ans = 0;

    for(int i=0;i<n;i++){
        if(m[a[i]]>1){
            m[a[i]]--;
            for(int j=a[i]+1;j<=30000;j++){
                if(m[j]==0){
                    m[j]++;
                    ans += j-a[i];
                    break;
                }
            }
        }
    }

    cout<<ans;

    return 0;
}
