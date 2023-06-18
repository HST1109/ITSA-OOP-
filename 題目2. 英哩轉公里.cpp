#include<iostream>

using namespace std;

int main(){
    int m;
    double output;
    cin>>m;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    output=m*1.6;
    cout<<output<<endl;
    return 0;
}