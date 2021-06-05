#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n, ans = 0;

    cin>>n;

    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
    }

    cout<<ans;


    return 0;
}
