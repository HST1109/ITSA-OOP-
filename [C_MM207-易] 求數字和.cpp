#include<iostream>
using namespace std;

int main(){
    int num[5],sum=0;
    for(int i=0;i<5;i++){
        cin>>num[i];
        sum+=(num[i]%13+1);
    }
    cout<<sum<<"\n";
    return 0;
}