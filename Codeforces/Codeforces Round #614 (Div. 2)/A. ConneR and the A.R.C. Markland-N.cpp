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

        int n,s,k;

        cin>>n>>s>>k;

        unordered_map<int,int> m;

        for(int i=0;i<k;i++){

            int input;
            cin>>input;
            m[input]++;

        }

        int l=INT_MAX,r=INT_MAX;

        int curr = s;

        while(curr>=1){
            if(m[curr]>0){
                curr--;
                continue;
            }
            l = s-curr;
            break;
        }

        curr = s;

        while(curr<=n){
            if(m[curr]>0){
                curr++;
                continue;
            }
            r = curr-s;
            break;
        }

        cout<<min(l,r)<<endl;
    }

    return 0;
}
