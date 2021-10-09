#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    char a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            bool flag = false;
            if(a[i][j]=='W'){

                if(i-1>=0)
                    if(a[i-1][j]=='P')
                        flag = true; 
                
                if(i+1<n)
                    if(a[i+1][j]=='P')
                        flag = true;
                    
                if(j-1>=0)
                    if(a[i][j-1]=='P')
                        flag = true;
                
                if(j+1<m)
                    if(a[i][j+1]=='P')
                        flag = true;

                if(flag){
                    ans++;
                }              
            }
        }
    }

    cout<<ans;

    return 0;
}
