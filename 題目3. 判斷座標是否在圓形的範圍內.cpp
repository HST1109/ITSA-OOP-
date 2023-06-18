#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x<=100 && y<=100 && pow(x,2)+pow(y,2)<=pow(100,2)){
        cout<<"inside\n";
    }else{
        cout<<"outside\n";
    }
    return 0;
}