#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    int a[n],b[m];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int i=0,j=0,suma=0,sumb=0,ans=0;

    while(i<n && j<m){
        if(suma<sumb || (suma==0 && sumb==0)){
            suma += a[i];
            i++;
        }else if(sumb<suma){
            sumb += b[j];
            j++;
        }else{
            ans++;
            suma = 0;
            sumb = 0;
        }
    }

    while(i<n){
        suma += a[i];
        i++;
    }

    while(j<m){
        sumb += b[j];
        j++;
    }

    if(suma==sumb){
        ans++;
    }

    cout<<ans;

    return 0;
}
