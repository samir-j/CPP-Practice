#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(x==1){
            cout<<"YES\n";
        }
        else if(x%2==0){
            if((n%x)%2==0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }
}
