#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(vector<int> a, vector<int> b){
    if(a[0]==b[0] && a[1]==b[1] && a[2]==b[2]){
        return a[3]>b[3];
    }else if(a[0]==b[0] && a[1]==b[1]){
        return a[2]<b[2];
    }else if(a[0]==b[0]){
        return a[1]<b[1];
    }else{
        return a[0]<b[0];
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n][4];

    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }

    int ans = INT_MAX, ind;

    for(int i=0;i<n;i++){

        bool flag = true;

        for(int j=0;j<n;j++){

            bool flag2 = false;

            for(int k=0;k<3;k++){

                if(a[i][k]<a[j][k]){
                    continue;
                }else{
                    flag2 = true;
                    break;
                }
            }

            if(!flag2){
                flag = false;
                break;
            }
        }

        if(flag){
            if(a[i][3]<ans){
                ans = a[i][3];
                ind = i+1;
            }
        }
    }

    cout<<ind;

    return 0;
}
