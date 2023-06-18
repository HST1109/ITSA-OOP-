#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int **dice=new int*[num];
    for(int i=0;i<num;i++){
        dice[i]=new int[6];
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<6;j++){
            cin>>dice[i][j];
        }
    }
    for(int i=0;i<num;i++){
        for(int k=0;k<6;k++){
            for(int j=0;j<5;j++){
                if(dice[i][j]>dice[i][j+1]){
                    int tmp=dice[i][j];
                    dice[i][j]=dice[i][j+1];
                    dice[i][j+1]=tmp;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<num;i++){
        int count=0;
        for(int j=0;j<6;j++){
            if(dice[i][j]==j+1){
                count++;
            }
            if(count==6){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}