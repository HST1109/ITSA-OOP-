#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    getchar();
    char **student=new char *[a];
    for(int i=0;i<a;i++){
        student[i] = new char[b];
    }
    int max=0,count=0,index=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>student[i][j];
        }
        getchar();
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(student[i][j]=='1'){
                count++;
                
            }
            if(count>max && j==b-1){
                    max=count;
                    index=i+1;
            }
        }
        count=0;
    }
    cout<<"Class "<<index<<" has "<<max<<" boys."<<endl;
    return 0;
}