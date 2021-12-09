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
    bool visited[n] = {false};

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    int ans = 0;

    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j] && !visited[j]){
                ans++;
                visited[j] = true;
                flag = true;
                break;
            }
            if(flag){
                break;
            }
        }
    }

    cout<<ans;

    return 0;
}
