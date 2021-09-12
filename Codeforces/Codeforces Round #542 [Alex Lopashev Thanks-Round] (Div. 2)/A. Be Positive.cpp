#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n], req = (n+1)/2, pos = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            pos++;
        }
    }

    if(pos>=req){
        cout<<1;
    }else{
        pos = 0;
        for(int i=0;i<n;i++){
            a[i] *= -1;
            if(a[i]>0){
                pos++;
            }
        }

        if(pos>=req){
            cout<<-1;
        }else{
            cout<<0;
        }
    }

    return 0;
}
