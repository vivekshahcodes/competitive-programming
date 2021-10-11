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

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            for(int k=0;k<n;k++){
                if(i==k) continue;
                if(j==k) continue;
                if(a[i]+a[j]==a[k]){
                    cout<<k+1<<" "<<j+1<<" "<<i+1;
                    return 0;
                }
            }
        }
    }

    cout<<-1;

    return 0;
}
