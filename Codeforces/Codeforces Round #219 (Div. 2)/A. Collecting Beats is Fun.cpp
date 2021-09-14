#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;

    cin>>k;

    map<int,int> m;

    bool flag = true;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            char input;
            cin>>input;
            int x = input-'0';
            if(x>0){
                m[x]++;
                if(m[x]>2*k){
                    flag = false;
                }
            }
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
