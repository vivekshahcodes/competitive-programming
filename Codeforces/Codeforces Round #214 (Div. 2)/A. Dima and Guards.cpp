#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }

    int x1,y1,z = n,ind=-1;

    for(int i=0;i<4;i++){
        int x = min(a[i][0],a[i][1]);
        int y = min(a[i][2],a[i][3]);
        if(x+y<=z){
            x1 = x, y1 = y;
            ind = i+1;
            z = x+y;
        }
    }

    if(ind==-1){
        cout<<-1;
    }else{
        cout<<ind<<" "<<x1<<" "<<n-x1;
    }

    return 0;
}
