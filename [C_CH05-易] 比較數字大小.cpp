#include<iostream>
using namespace std;

int main(){
    int num[3];
    for(int i=0;i<3;i++){
        cin>>num[i];
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(num[j]<num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        if(i==2){
            cout<<num[i]<<"\n";
        }else{
            cout<<num[i]<<">";
        }
    }
    return 0;
}