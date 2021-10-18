#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        int l,r,m=INT_MAX;

        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<m){
                m = a[i]-a[i-1];
                l = i-1;
                r = i;
            }
        }

        cout<<min(a[l],a[r])<<" ";

        vector<int> v;

        for(int i=0;i<n;i++){
            if(i==l || i==r){
                continue;
            }

            if(a[i]<=max(a[l],a[r])){
                v.push_back(a[i]);
            }else{
                cout<<a[i]<<" ";
            }
        }

        for(int i:v){
            cout<<i<<" ";
        }

        cout<<max(a[l],a[r])<<endl;
    }

    return 0;
}
