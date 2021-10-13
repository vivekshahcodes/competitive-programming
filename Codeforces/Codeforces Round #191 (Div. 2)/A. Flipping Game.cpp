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

    int ans = 0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int c = 0;
            for(int k=0;k<n;k++){
                int setBit = a[k];
                if(k>=i && k<=j){
                    setBit = (a[k]^1);
                }
                c+=setBit;
            }
            ans = max(ans,c);
        }
    }

    cout<<ans;

    return 0;
}
