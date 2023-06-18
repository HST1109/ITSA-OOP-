#include<iostream>

using namespace std;

int f(int n),g(int n);

int f(int n){
    if(n==1){
        return 2;
    }else{
        return 3*f(n-1)+g(n-1);
    }
}

int g(int n){
    if(n==1){
        return -6;
    }else{
        return -f(n-1)+g(n-1);
    }
}

int main(){
    int num;
    cin>>num;
    cout<<f(num)<<" "<<g(num)<<endl;
    return 0;
}