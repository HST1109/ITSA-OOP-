#include<iostream>
using namespace std;

int main(){
    int input[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>input[i][j];
        }
    }
    int ans=input[0][0]*input[1][1]*input[2][2]+input[1][0]*input[2][1]*input[0][2]+input[2][0]*input[0][1]*input[1][2]-input[0][2]*input[1][1]*input[2][0]-input[0][1]*input[1][0]*input[2][2]-input[0][0]*input[1][2]*input[2][1];
    cout<<ans<<endl;
    return 0;
}