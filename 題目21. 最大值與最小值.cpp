#include<iostream>

using namespace std;

int main(){
    float num[10];
    float max=0,min=100000;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    for(int i=0;i<10;i++){
        cin>>num[i];
        if(num[i]>max){
            max=num[i];
        }
        if(num[i]<min){
            min=num[i];
        }
    }
    cout<<"maximum:"<<max<<endl;
    cout<<"minimum:"<<min<<endl;
    return 0;
}