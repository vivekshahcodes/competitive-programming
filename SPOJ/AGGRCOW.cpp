#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isGood(int m, int a[], int n, int c){

    int prev = a[0];
    int cow = 1;

    for(int i=1;i<n;i++){
        if(a[i]-prev>=m){
            prev = a[i];
            cow++;
        }

        if(cow>=c){
            return true;
        }
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int n,c;

        cin>>n>>c;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        int l = 0, r = a[n-1];

        while(l+1<r){

            int m = l + (r-l)/2;

            if(isGood(m,a,n,c)){
                l = m;
            }else{
                r = m;
            }
        }

        cout<<l<<endl;
    }

    return 0;
}
