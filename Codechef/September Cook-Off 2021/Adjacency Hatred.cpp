#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        int a[n];

        int o = -1, e = -1;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]&1){
                o = i;
            }else{
                e = i;
            }
        }

        if(o==-1 || e==-1){
            cout<<-1<<endl;
        }else{
            cout<<a[o]<<" ";
            for(int i=0;i<n;i++){
                if(i!=o && i!=e){
                    cout<<a[i]<<" ";
                }
            }
            cout<<a[e]<<endl;
        }

    }

    return 0;
}
