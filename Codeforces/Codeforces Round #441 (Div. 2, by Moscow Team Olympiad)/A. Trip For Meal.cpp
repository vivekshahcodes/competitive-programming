#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a,b,c;

    cin>>n>>a>>b>>c;

    int curr = 1, ans = 0;

    n--;

    while(n--){

        if(curr == 1){
            ans += min(a,b);
            if(a<=b){
                curr = 2;
            }else{
                curr = 3;
            }
        }else if(curr==2){
            ans += min(a,c);
            if(a<=c){
                curr = 1;
            }else{
                curr = 3;
            }
        }else{
            ans += min(b,c);
            if(b<=c){
                curr = 1;
            }else{
                curr = 2;
            }
        }
    }

    cout<<ans;

    return 0;
}
