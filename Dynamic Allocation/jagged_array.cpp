//jagged array = arrays of arrays
//arr[][] = {{1,2,3}, {3,4}, {5}};
#include<iostream>
using namespace std;
int main(){
    
    int row;
    cout<<"Enter the number of rows : "<<endl;
    cin>>row;

    int** arr = new int*[row]; //creation of 2d array
    int* number_of_col = new int[row]; //number of col in each row

    for(int i=0; i<row; i++){
        cout<<"Enter size of column "<<i<<endl;
        cin>>number_of_col[i];
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<number_of_col[i]; j++){
            cin>>arr[i][j];
        }
    }
    
    return 0;
}