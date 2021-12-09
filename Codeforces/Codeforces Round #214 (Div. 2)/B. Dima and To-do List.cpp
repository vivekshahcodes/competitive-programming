#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    map<int,int> m;

    for(int i=1;i<=n;i++){
        int input;
        cin>>input;
        m[i%k] += input;
    }

    m[k] = m[0];

    int minTillNow = INT_MAX;
    int ind;

    for(int i=1;i<=k;i++){
        if(m[i]<minTillNow){
            minTillNow = m[i];
            ind = i;
        }
    }

    cout<<ind;

    return 0;
}
