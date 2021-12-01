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

        int n,a,b;
        cin>>n>>a>>b;

        map<int,int> m;

        int x = n/2;

        vector<int> l,r;

        l.push_back(a);
        m[a]++;

        for(int i=n;i>=1;i--){
            if(l.size()==x){
                break;
            }
            if(i!=a && i!=b){
                l.push_back(i);
                m[i]++;
            }
        }

        for(int i=1;i<=n;i++){
            if(m[i]==0){
                r.push_back(i);
            }
        }

        int mi = INT_MAX, ma = 0;

        for(int i:l){
            mi = min(mi,i);
        }

        for(int i:r){
            ma = max(ma,i);
        }

        if(mi!=a || ma!=b){
            cout<<-1;
        }else{
            for(int i:l){
                cout<<i<<" ";
            }
            for(int i:r){
                cout<<i<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}
