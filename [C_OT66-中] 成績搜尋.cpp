#include<iostream>
using namespace std;

int main(){
    int num;
    int max=0;
    cin>>num;
    int grade[num];
    for(int i=0;i<num;i++){
        cin>>grade[i];
        if(grade[i]>max){
            max=grade[i];
        }
    }
    cout<<max<<endl;
    return 0;
}