#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<int> ans;

    bool flag = false;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ans.push_back(a);
        if(a!=b){
            flag = true;
        }
    }

    if(flag){
        cout<<"rated";
    }else{
        bool flag2 = true;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]<ans[i+1]){
                flag2 = false;
                break;
            }
        }

        if(flag2){
            cout<<"maybe";
        }else{
            cout<<"unrated";
        }
    }

    return 0;
}
