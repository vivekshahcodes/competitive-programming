#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ind = 0, ans = 0;

    for(int i=0;i<n;i++){
        
        ind += a[i];

        if(ind<0){
            ans += -ind;
            ind = 0;
        }
    }

    cout<<ans;

    return 0;
}
