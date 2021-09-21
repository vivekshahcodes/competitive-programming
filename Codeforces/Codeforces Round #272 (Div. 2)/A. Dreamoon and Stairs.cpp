#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    vector<int> ans;

    for(int i=0;i<=n;i++){
        int x = i;
        int y = n-i;
        if(y%2==0){
            ans.push_back((y/2)+x);
        }
    }

    int finalAns = -1;

    for(auto i:ans){
        if(i%k==0){
            finalAns = i;
            break;
        }
    }

    cout<<finalAns;

    return 0;
}
