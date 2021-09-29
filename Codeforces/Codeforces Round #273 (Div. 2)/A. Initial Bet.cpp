#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[5];

    int total = 0;

    for(int i=0;i<5;i++){
        cin>>a[i];
        total += a[i];
    }

    if(total%5==0 && total!=0){
        cout<<total/5;
    }else{
        cout<<-1;
    }

    return 0;
}
