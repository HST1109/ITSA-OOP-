#include<iostream>

using namespace std;

int main(){
    int y;
    cin>>y;
    if(y%4==0 && y%100!=0 || y%400==0){
        cout<<"Bissextile Year\n";
    }else{
        cout<<"Common Year\n";
    }
    return 0;
}