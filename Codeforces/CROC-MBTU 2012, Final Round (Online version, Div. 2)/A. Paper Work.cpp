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

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> ans;

    int curr = 0, lossCount = 0;

    for(int i=0;i<n;i++){
        if(a[i]>=0){
            curr++;
        }else{
            lossCount++;
            if(lossCount==3){
                ans.push_back(curr);
                lossCount = 1;
                curr = 1;
                if(i==n-1){
                    ans.push_back(1);
                }
                continue;
            }
            curr++;
        }

        if(i==n-1){
            ans.push_back(curr);
        }

    }

    cout<<ans.size()<<endl;

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}
