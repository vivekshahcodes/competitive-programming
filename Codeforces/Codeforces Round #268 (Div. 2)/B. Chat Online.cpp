#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p,q,l,r;

    cin>>p>>q>>l>>r;

    map<int,int> m;

    for(int i=0;i<p;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            m[j] = 1;
        }
    }

    set<int> s;

    for(int i=0;i<q;i++){
        int incr = l+1;
        int latest = -1;
        int c,d;
        cin>>c>>d;

        for(int j=c+l;j<=d+l;j++){
            if(m[j]==1){
                latest = j;
            }
        }

        if(latest!=-1){
            s.insert(incr-1);
        }

        while(incr<=r){
            if(m[incr+d]==1){
                latest = incr+d;
            }
            if(latest>=c+incr && latest<=d+incr){
                s.insert(incr);
            }
            incr++;
        }

    }
    cout<<endl<<s.size()<<endl;

    return 0;
}
