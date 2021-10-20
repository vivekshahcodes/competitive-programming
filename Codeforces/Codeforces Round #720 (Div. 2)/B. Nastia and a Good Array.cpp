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

        int a[n+1], ind;
        int m = INT_MAX;

        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]<m){
                m = a[i];
                ind = i;
            }
        }

        cout<<n-1<<endl;

        int i = ind, tempm = m;

        while(i<n){
            cout<<ind<<" "<<i+1<<" "<<m<<" "<<tempm+1<<endl;
            i++;
            tempm++;
        }

        i = ind, tempm = m;

        while(i>1){
            cout<<ind<<" "<<i-1<<" "<<m<<" "<<tempm+1<<endl;
            i--;
            tempm++;
        }
    }

    return 0;
}
