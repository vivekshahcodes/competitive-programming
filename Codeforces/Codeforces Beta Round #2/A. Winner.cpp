#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int highscore = 0;

    map<string,int> m;
    map<string,int> fm;
    string names[n];
    int scores[n];

    for(int i=0;i<n;i++){

        string a;
        int b;

        cin>>a>>b;

        names[i] = a;
        scores[i] = b;

        m[a]+=b;

    }

    for(auto i:m){
        highscore = max(highscore,i.second);
    }

    for(int i=0;i<n;i++){
        fm[names[i]]+=scores[i];
        if(fm[names[i]]>=highscore && m[names[i]]==highscore){
            cout<<names[i];
            break;
        }
    }

    


    return 0;
}
