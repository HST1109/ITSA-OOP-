#include<iostream>

using namespace std;

class grade{
    public:
        int math,Eng,num;

};

int main(){
    int n;
    cin>>n;
    grade *student=new grade[n];
    for(int i=0;i<n;i++){
        cin>>student[i].num>>student[i].math>>student[i].Eng;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(student[j].math<student[j+1].math){
                grade tmp=student[j];
                student[j]=student[j+1];
                student[j+1]=tmp;
            }else if(student[j].math==student[j+1].math && student[j].Eng<student[j+1].Eng){
                grade tmp=student[j];
                student[j]=student[j+1];
                student[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<student[i].num<<" "<<student[i].math<<" "<<student[i].Eng<<endl;
    }
    return 0;
}