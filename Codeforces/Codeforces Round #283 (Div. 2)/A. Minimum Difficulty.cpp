#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n], m = 0, ind;

    vector<int> diff;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0){
            diff.push_back(a[i]-a[i-1]);
            if(a[i]-a[i-1]>m){
                m = a[i]-a[i-1];
                ind = i-1;
            }
        }
    }

    int ans = INT_MAX;

    if(diff.size()==2){
        cout<<diff[0]+diff[1];
    }else{
        for(int i=0;i<diff.size()-1;i++){
            if(i!=ind && (i+1)!=ind){
                int x = max(m,diff[i]+diff[i+1]);
                ans = min(ans,x);
            }
        }

        cout<<ans;
    }


    return 0;
}
