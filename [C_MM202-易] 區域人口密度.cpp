#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<num*20000./198<<"\n";
    return 0;
}