#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> ans;

    int n;

    cin>>n;

    for(int i=1;i<=n;i++){
        bool flag = true;
        for(int j=1;j<=n;j++){
            int input;
            cin>>input;
            if(input==1||input==3){
                flag = false;
            }
        }
        if(flag){
            ans.push_back(i);
        }
    }

    cout<<ans.size()<<endl;
    for(int num:ans){
        cout<<num<<" ";
    }

    return 0;
}
