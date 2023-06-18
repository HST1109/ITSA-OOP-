#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    char *input=new char[n];
    string *letter = new string[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
        if(input[i]=='N'){
            letter[i]="Nutrition";
        }else if(input[i]=='E'){
            letter[i]="Exercise";
        }else if(input[i]=='W'){
            letter[i]="Water";
        }else if(input[i]=='S'){
            letter[i]="Sun";
        }else if(input[i]=='T'){
            letter[i]="Temper";
        }else if(input[i]=='A'){
            letter[i]="Air";
        }else if(input[i]=='R'){
            letter[i]="Rest";
        }else if(input[i]=='t'){
            letter[i]="trust";
        }
    }
    for(int i=0;i<n;i++){
        cout<<input[i]<<": "<<letter[i]<<endl;
    }
    return 0;
}