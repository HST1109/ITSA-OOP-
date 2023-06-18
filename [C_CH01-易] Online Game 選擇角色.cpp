#include<iostream>
using namespace std;

int main(){
    int num=0;
    while(cin>>num){
        if(num==1){
            cout<<"Person\n";        
        }else if(num==2){
            cout<<"Fairy\n";
        }else if(num==3){
            cout<<"Dwarf\n";
        }
    }
    return 0;
}