#include<iostream>
#include<string.h>
using namespace std;


int main(){
    char input[20];
    cin>>input;
    int len=strlen(input);
    int *output = new int[len];
    for(int i=0;i<len;i++){
        output[i] = input[i]-'a';
    }
    for(int i=0;i<len;i++){
        cout<<"("<<output[i]<<")";
    }
    cout<<endl;
    return 0;
}