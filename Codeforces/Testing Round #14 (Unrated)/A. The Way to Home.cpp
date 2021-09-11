#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k;

    cin>>n>>k;

    string s;
    
    cin>>s;

    int ans = 0, i = 0;
    bool flag = true;

    while(i<n){

        int curr = i;

        i+=k;
        ans++;

        if(i>=n-1){
            break;
        }
        
        while(s[i]!='1'){
            i--;
            if(i==curr){
                flag = false;
                break;
            }
        }

        if(!flag){
            break;
        }

    }

    if(flag){
        cout<<ans;
    }else{
        cout<<-1;
    }

    return 0;
}
