#include<iostream>
using namespace std;

int main(){
    char a;
    while(cin>>a){
        if(a=='E'){
            cout<<"ByeBye"<<endl;
        }else if(a=='M'){
            cout<<"Male"<<endl;
        }else if(a=='F'){
            cout<<"Female"<<endl;
        }
    }
    return 0;
}