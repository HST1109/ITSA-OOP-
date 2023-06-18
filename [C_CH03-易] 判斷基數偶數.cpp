#include<iostream>
using namespace std;

int main(){
    int num;
    while(cin>>num){
        if(num%2==0){
            cout<<"even\n";
        }else{
            cout<<"odd\n";
        }
    }
    return 0;
}