#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int calcDist(int a, int b){
    if(b<a){
        return b-a+12;
    }else{
        return b-a;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string,int> m;

    string arr[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        m[arr[i]] = i+1;
    }

    string a[3];

    for(int i=0;i<3;i++){
        cin>>a[i];
    }

    sort(a,a+3);

    do{
        int x = calcDist(m[a[0]],m[a[1]]);
        int y = calcDist(m[a[1]],m[a[2]]);

        if(x==4 && y==3){
            cout<<"major";
            return 0;
        }

        if(x==3 && y==4){
            cout<<"minor";
            return 0;
        }

    }while(next_permutation(a,a+3));

    cout<<"strange";

    return 0;
}
