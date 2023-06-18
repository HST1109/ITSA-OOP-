#include<iostream>

using namespace std;

int fib(int n){
    if(n==1||n==0){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int num;
    while(cin>>num){
        if(num==-1){
            break;
        }else{
            cout<<fib(num)<<endl;
        }
    }
    return 0;
}