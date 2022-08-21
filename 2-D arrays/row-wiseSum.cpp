#include<iostream>
using namespace std;
void printSum(int arr[][3], int row, int col){
    int maxSum=0;
    int rowIndex=-1;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
        if(sum>maxSum){
            maxSum = sum;
            rowIndex=i;
        }
    }
    cout<<"Max sum is "<<maxSum<<" and @index "<<rowIndex<<endl;
}

int main(){
    int arr[3][3];
    //taking input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    printSum(arr,3,3);
    return 0;
}