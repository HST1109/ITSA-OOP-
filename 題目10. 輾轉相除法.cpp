#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    while(b!=0){
        a%=b;
        int temp=a;
        a=b;
        b=temp;
    }
    cout<<a<<endl;
    return 0;
}