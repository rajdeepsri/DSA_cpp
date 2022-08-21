#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}

int main(){

    //declaration
    int arr[3][4];
    //arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; -> row wise input
    //arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}} -> poore row ka eksaath dediya input
    // taking input -> ROW WISE INPUT
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //taking input -> COL WISE INPUT
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    //output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target = 13;
    if(isPresent(arr,target,3,4)) cout<<"Present"<<endl;
    else cout<<"no"<<endl;
    return 0;
}