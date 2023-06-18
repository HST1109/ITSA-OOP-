#include<iostream>
using namespace std;

int main(){
    int num[5];
    while(1){
        for(int i=0;i<5;i++){
            cin>>num[i];
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<4;j++){
                if(num[j]>num[j+1]){
                    int tmp=num[j];
                    num[j]=num[j+1];
                    num[j+1]=tmp;
                }
            }
        }
        if(num[4]==0){
            break;
        }else{
            cout<<num[2]<<endl;
        }
    }
    return 0;
}