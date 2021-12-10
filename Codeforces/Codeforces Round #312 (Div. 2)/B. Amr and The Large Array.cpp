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

    vector<pair<int,int>> v(1e6,{0,0});
    int maxFreq = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(m[a[i]]==0){
            v[a[i]].first = i+1;
        }else{
            v[a[i]].second = i+1;
        }
        m[a[i]]++;
        maxFreq = max(maxFreq,m[a[i]]);
    }

    int x=1,y=n,dist=INT_MAX;

    if(maxFreq==1){
        cout<<1<<" "<<1;
        return 0;
    }

    for(int i=1;i<=n;i++){
        if(m[a[i]]==maxFreq){
            int temp = v[a[i]].second-v[a[i]].first;
            if(temp<dist){
                dist = temp;
                x = v[a[i]].first;
                y = v[a[i]].second;
            }
        }
    }

    cout<<x<<" "<<y;

    return 0;
}
