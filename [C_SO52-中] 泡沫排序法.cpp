#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int grade[num];
    for(int i=0;i<num;i++){
        cin>>grade[i];
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1;j++){
            if(grade[j]<grade[j+1]){
                int temp=grade[j];
                grade[j]=grade[j+1];
                grade[j+1]=temp;
            }
        }
    }
    for(int i=0;i<num;i++){
        cout<<i+1<<" "<<grade[i]<<"\n";
    }
    return 0;
}