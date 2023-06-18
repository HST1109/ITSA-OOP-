#include<iostream>
using namespace std;

int main(){
    int num[10];
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(num[j]>num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(i==9){
            cout<<num[i]<<"\n";
        }else{
            cout<<num[i]<<" ";
        }
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Median:"<<(num[4]+num[5])/2.<<"\n";
}