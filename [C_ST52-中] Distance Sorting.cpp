#include<iostream>
using namespace std;

class road{
    public:
        int a,b,dis;
        void output(){
            cout<<a<<" "<<b<<" "<<dis<<endl;
        }
};

int main(){
    int num;
    cin>>num;
    road *input= new road[num];
    for(int i=0;i<num;i++){
        cin>>input[i].a>>input[i].b>>input[i].dis;
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num-1;j++){
            if(input[j].dis>input[j+1].dis){
                road tmp=input[j];
                input[j]=input[j+1];
                input[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<num;i++){
        input[i].output();
    }
    return 0;
}