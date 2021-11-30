#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    for(int x=0;x<=100;x++){

        if(((a*x)+b-d)%c==0 && ((a*x)+b-d)/c>=0){
            cout<<(a*x)+b;
            return 0;
        }
    }

    cout<<-1;

    return 0;
}
