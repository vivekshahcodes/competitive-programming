#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int arr[n], neg = 0;

    vector<int> a,b,c;
    bool flaga = true, flagb = true;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            neg++;
        }
    }

    for(int i=0;i<n;i++){

        if(flaga && arr[i]<0){
            a.push_back(arr[i]);
            flaga = false;
        }else if(flagb){

            if(neg>=3 && arr[i]<0){
                b.push_back(arr[i]);
                if(b.size()==2){
                    flagb = false;
                }
            }else if(neg<3 && arr[i]>0){
                b.push_back(arr[i]);
                flagb = false;
            }else{
                c.push_back(arr[i]);
            }

        }else{
            c.push_back(arr[i]);
        }
    }

    cout<<1<<" "<<a[0]<<endl;

    cout<<b.size()<<" ";

    for(auto i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<c.size()<<" ";

    for(auto i:c){
        cout<<i<<" ";
    }

    return 0;
}
