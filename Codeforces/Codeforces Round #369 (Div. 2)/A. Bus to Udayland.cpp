#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;
    bool flag = true;

    cin>>n;

    char a[n][5];

    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(flag && a[i][j]=='O' && a[i][j+1]=='O'){
                a[i][j] = '+';
                a[i][j+1] = '+';
                flag = false;
            }
        }
    }

    if(flag){
        cout<<"NO";
    }else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }


    return 0;
}
