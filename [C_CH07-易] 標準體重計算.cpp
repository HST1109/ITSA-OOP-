#include<iostream>
using namespace std;

int main(){
    int height,gender;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    while(cin>>height>>gender){
        if(gender==1){
            float weight=(height-80)*0.7;
            cout<<weight<<endl;
        }else if(gender==2){
            float weight=(height-70)*0.6;
            cout<<weight<<endl;
        }
    }
    return 0;
}