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

        int n,k;

        cin>>n>>k;

        priority_queue<int> q;

        for(int i=0;i<n;i++){
            int input;
            cin>>input;
            q.push(input);
        }

        int ans = 0;
        bool flag = true;

        while(k>0){
            if(q.top()==0){
                flag = false;
                break;
            }else{
                int x = q.top();
                k -= x;
                ans++;
                q.pop();
                q.push(x/2);                
            }
        }

        if(flag){
            cout<<ans<<endl;
        }else{
            cout<<"Evacuate"<<endl;
        }
    }

    return 0;
}
