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

        int temp = n;
        int y = 0;

        while(temp>0){
            y*=10;
            y+=temp%10;
            temp/=10;
        }

        cout<<y<<endl;
    }

    return 0;
}
