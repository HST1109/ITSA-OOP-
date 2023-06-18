#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i=2;i<static_cast<int>(sqrt(num));i++){
        if(num%i==0){
            cout<<num<<" is not a prime number.\n";
            return 0;
        }
    }
    cout<<num<<" is a prime number.\n";
    return 0;
}