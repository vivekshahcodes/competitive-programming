#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char a[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }

    bool ans = false;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            map<char,int> m;
            m[a[i][j]]++;
            m[a[i][j+1]]++;
            m[a[i+1][j]]++;
            m[a[i+1][j+1]]++;
            for(auto i:m){
                if(i.second>2){
                    ans = true;
                    break;
                }
            }

            if(ans){
                break;
            }
        }

        if(ans){
            break;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
