#include<iostream>
using namespace std;
void sumrow(int arr[3][4]){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of row "<<i<<" is: "<<sum<<endl;
    }
}
void sumcol(int arr[3][4]){
    for(int j=0;j<4;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of column "<<j<<" is: "<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={
        2,5,8,80,
        3,6,90,20,
        4,7,10,30
    };
    sumrow(arr);
    sumcol(arr);
}