#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int preva, prevb, curr, ans = 1;

    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        if(i==1){
            preva = a;
            prevb = b;
            curr = 1;
        }else{
            if(a==preva && b==prevb){
                curr++;
                ans = max(ans,curr);
            }else{
                preva = a;
                prevb = b;
                curr = 1;
            }
        }
    }

    cout<<ans;

    return 0;
}
