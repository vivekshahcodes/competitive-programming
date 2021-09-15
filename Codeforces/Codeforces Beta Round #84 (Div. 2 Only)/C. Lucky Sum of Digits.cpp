#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<int,int> m;

    for(int i=1;i<=6;i++){
        if(i!=4){
            m[i] = 1;
        }
    }

    m[9] = 1;
    m[10] = 1;
    m[13] = 1;
    m[17] = 1;

    string ans;

    bool flag = true;

    while(n>0){

        if(m[n]==1){
            flag = false;
            break;
        }

        if(n>=7 && m[n-7]!=1){
            n-=7;
            ans+="7";
        }else if(n>=4 && m[n-4]!=1){
            n-=4;
            ans+="4";
        }else{
            flag = false;
        }
    }

    if(flag){
        sort(ans.begin(),ans.end());
        cout<<ans;
    }else{
        cout<<-1;
    }

    return 0;
}
