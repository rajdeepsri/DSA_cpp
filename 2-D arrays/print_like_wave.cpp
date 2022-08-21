//phla col top to bottom agla bottom to top and so on
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int row=3,col=4;
    //simple print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //wave print
    for(int i=0; i<col; i++){
        //traversing col
        if(i&1){ //odd -> bottom to top
            for(int j=row-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{//even k liye
            for(int j=0; j<row; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}