#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    map<int,int> m;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        m[input]++;
    }

    int ans = 0;

    bool flag = true;

    while(flag){

        flag = false;

        for(int i=k-1;i>=1;i--){
            if(m[i]>0){
                m[i]--;
                flag = true;
            }
            if(m[i-1]>0){
                m[i]++;
            }
        }

        if(!flag){
            break;
        }

        ans++;

    }

    cout<<ans;

    return 0;
}
