#include<iostream>
#include<string>
using namespace std;

class classmate{
    public:
        int grade;
        string name;
};

int main(){
    int n;
    cin>>n;
    classmate *student= new classmate[n];
    for(int i=0;i<n;i++){
        cin>>student[i].name>>student[i].grade;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(student[j].grade<student[j+1].grade){
                classmate tmp=student[j];
                student[j]=student[j+1];
                student[j+1]=tmp;
            }else if(student[j].grade==student[j+1].grade && student[j].name>student[j+1].name){
                classmate tmp=student[j];
                student[j]=student[j+1];
                student[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<student[i].name<<" "<<student[i].grade<<endl;
    }
    return 0;
}