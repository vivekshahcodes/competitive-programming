#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r1,r2,c1,c2,d1,d2;

    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            for(int k=1;k<=9;k++){
                for(int l=1;l<=9;l++){
                    if(i+j==r1 && k+l==r2 && i+k==c1 && j+l==c2 && i+l==d1 && j+k==d2 && i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                        cout<<i<<" "<<j<<endl<<k<<" "<<l;
                        return 0;
                    }
                }
            }
        }
    }

    cout<<-1;

    return 0;
}
