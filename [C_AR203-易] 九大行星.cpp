#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int temp[num];
    string name[num];
    for(int i=0;i<num;i++){
        cin>>temp[i];
        if(temp[i]==1){
            name[i]="Mercury";
        }else if(temp[i]==2){
            name[i]="Venus";
        }else if(temp[i]==3){
            name[i]="Earth";
        }else if(temp[i]==4){
            name[i]="Mars";
        }else if(temp[i]==5){
            name[i]="Juputer";
        }else if(temp[i]==6){
            name[i]="Saturn";
        }else if(temp[i]==7){
            name[i]="Uranus";
        }else if(temp[i]==8){
            name[i]="Neptunus";
        }else if(temp[i]==9){
            name[i]="Pluto";
        }
    }
    for(int i=0;i<num;i++){
        cout<<temp[i]<<" "<<name[i]<<"\n";
    }
    return 0;
}