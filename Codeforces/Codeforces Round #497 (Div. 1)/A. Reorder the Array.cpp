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

    sort(a,a+n);

    queue<int> q;
    int ans = 0;
    q.push(a[0]);

    for(int i=1;i<n;i++){
        if(q.size()>0){
            int x = q.front();
            if(a[i]>x){
                ans++;
                q.pop();
                q.push(a[i]);
            }else{
                q.push(a[i]);
            }
        }else{
            q.push(a[i]);
        }
    }

    cout<<ans;

    return 0;
}
