#include<iostream>
using namespace std;

int main(){
    int n;//n=4
    cout<<"enter the value of n "<<endl;
    cin>>n;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}