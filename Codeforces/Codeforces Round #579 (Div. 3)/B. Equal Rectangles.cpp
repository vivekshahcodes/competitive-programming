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

        n*=4;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        int l = 0, r = n-1, area;
        bool flag = true;
        bool flag2 = false;

        while(l<r){

            if((a[l]!=a[l+1]) || (a[r]!=a[r-1])){
                flag = false;
                break;
            }

            if(!flag2){
                area = a[l]*a[r];
                flag2 = true;
            }else{
                if(a[l]*a[r] != area){
                    flag = false;
                    break;
                }
            }

            l += 2;
            r -= 2;

        }

        string ans = flag?"YES":"NO";

        cout<<ans<<endl;

    }

    return 0;
}
