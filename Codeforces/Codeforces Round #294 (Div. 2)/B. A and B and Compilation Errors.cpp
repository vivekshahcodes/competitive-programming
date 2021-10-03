#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a = 0, b = 0, c = 0;

    for(int i=0;i<n;i++){

        int input;
        cin>>input;

        a += input;

    }

    for(int i=0;i<n-1;i++){

        int input;
        cin>>input;

        b += input;

    }

    for(int i=0;i<n-2;i++){

        int input;
        cin>>input;

        c += input;

    }

    cout<<a-b<<endl<<b-c;

    return 0;
}
