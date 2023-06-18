#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdlib>
using namespace std;

int main(){
    char input[100];
    fgets(input,100,stdin);
    int len=strlen(input);
    int countnum=0,countalpha=0;
    for(int i=0;i<len;i++){
        if(isdigit(input[i])){
            countnum++;
        }else if(isalpha(input[i])){
            countalpha++;
        }
    }
    cout<<countalpha<<","<<countnum<<"\n";
    return 0;
}