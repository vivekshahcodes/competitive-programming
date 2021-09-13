#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    char a[n][m];

    set<int> ans;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int highest[m];

    for(int j=0;j<m;j++){
        int maxPerSub = 0;
        for(int i=0;i<n;i++){
            maxPerSub = max(maxPerSub,a[i][j]-'0');
        }
        highest[j] = maxPerSub;
    }

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(a[i][j]-'0'==highest[j]){
                ans.insert(i);
            }
        }
    }

    cout<<ans.size();

    return 0;
}
