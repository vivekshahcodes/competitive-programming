#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n+1];

    int x = 0, y = 0;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
       if(i==a[a[i]] && i!=a[i]){
           x = i;
           y = a[i];
           break;
       }
    }

    if(x==0 && y==0){
        cout<<0<<" "<<0;
        return 0;
    }

    for(int i=1;i<=n;i++){
        if(i>=x && i<=y){
            continue;
        }
        if(a[i]!=i){
            x = 0;
            y = 0;
            break;
        }
    }

    if(x==0 && y==0){
        cout<<0<<" "<<0;
        return 0;
    }

    int origX = x, origY = y;

    while(x<=y){

        if(x!=a[y]){
            x = 0;
            y = 0;
            break;
        }

        x++;
        y--;
    }

    if(x==0 && y==0){
        cout<<0<<" "<<0;
    }else{
        cout<<origX<<" "<<origY;
    }

    return 0;
}
