#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    char alpha[num];
    for(int i=0;i<num;i++){
        cin>>alpha[i];
        alpha[i]+=2;
    }
    for(int i=0;i<num;i++){
        cout<<alpha[i]<<"\n";
    }
    return 0;
}