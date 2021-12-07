#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int d,k;

    cin>>d>>k;

    int mi = 0, ma = 0;

    int a[d],b[d];

    for(int i=0;i<d;i++){
        int x,y;
        cin>>x>>y;
        a[i] = x;
        b[i] = y;
        mi += x;
        ma += y;
    }

    if(k>=mi && k<=ma){
        cout<<"YES"<<endl;
        int x = k-mi;
        int i = 0;
        while(x){
            if(b[i]>a[i]){
                int y = min(b[i]-a[i],x);
                a[i]+=y;
                x-=y;
            }
            i++;
        }
        for(int i=0;i<d;i++){
            cout<<a[i]<<" ";
        }        
    }else{
        cout<<"NO";
    }

    return 0;
}
