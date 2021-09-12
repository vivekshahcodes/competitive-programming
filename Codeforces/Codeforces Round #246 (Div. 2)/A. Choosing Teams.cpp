#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int c = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        if(input+k<=5){
            c++;
        }
    }

    cout<<c/3;

    return 0;
}
