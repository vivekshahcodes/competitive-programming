#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    vector<int> v;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        if(input==1){
            v.push_back(i+1);
        }
    }
    int i = lower_bound(v.begin(),v.end(),k)-v.begin();

    if(i==v.size()){
        cout<<v[0];
    }else{
        cout<<v[i];
    }

    return 0;
}
