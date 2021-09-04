#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    double total = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        total+=input;
    }

    cout<<fixed<<setprecision(12)<<total/n;

    return 0;
}
