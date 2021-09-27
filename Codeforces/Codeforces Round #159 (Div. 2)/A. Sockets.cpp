#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,k;

    cin>>n>>m>>k;

    vector<int> v;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        v.push_back(input);
    }

    sort(v.rbegin(),v.rend());

    if(k>=m){
        cout<<0;
    }else{
        int ans = 0;
        bool flag = false;

        for(int i=0;i<n;i++){
            k += v[i]-1;
            ans++;
            if(k>=m){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<ans;
        }else{
            cout<<-1;
        }
    }

    return 0;
}
