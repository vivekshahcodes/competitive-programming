#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a[4][4];

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            a[i][j] = 1;
        }
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            int x;
            cin>>x;
            if(x&1){

                a[i][j] ^= 1;

                if(i+1<=3){
                    a[i+1][j] ^= 1;
                }

                if(i-1>=0){
                    a[i-1][j] ^= 1;
                }

                if(j+1<=3){
                    a[i][j+1] ^= 1;
                }

                if(j-1>=0){
                    a[i][j-1] ^= 1;
                }
            }
        }
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}
