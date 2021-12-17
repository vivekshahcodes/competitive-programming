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

        int n;

        cin>>n;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool ans = true;

        int l=0, r=n-1, c=0;

        while(l<=r){
            if(a[l]<c || a[r]<c){
                ans = false;
                break;
            }
            c++;
            l++;
            r--;
        }

        if(n%2==0){
            int x = (n/2)-1;
            int y = n/2;

            if(a[x]==a[y] && a[x]==((n/2)-1)){
                ans = false;
            }
        }

        if(ans){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }

    return 0;
}
