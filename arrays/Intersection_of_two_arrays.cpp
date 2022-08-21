#include<bits/stdc++.h>
using namespace std;
// Brute force
// int main(){
//     int array1[5]={7,2,3,6,5};
//     int array2[4]={6,7,3,8};
//     int count[5]={};
//     int m=0;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<4;j++){
//             if(array1[i]==array2[j]){
//                 count[m]=array1[i];
//                 m++; 
//             }
//         }
//     }
    // for(int i=0;i<5;i++){
    //     cout<<count[i]<<" ";
    // }
// }
//Optmized with time complexicity O(n)
int main(){
    int array1[4]={1,2,2,5};
    int array2[5]={1,2,2,3,4};
    int i=0,j=0,m=0;
    int count[5]={};
    while(i<4 && j<5){
        if(array1[i]==array2[j]){
            count[m]=array1[i];
            i++;
            j++;
            //now insert element
        }
        else if(array1[i]<array2[j]){
            i++;
        }
        else {
            j++;
        }
    }
    for(int i=0;i<5;i++){
        cout<<count[i]<<" ";
    }
}
