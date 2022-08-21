//Array ke 2 element ka sum = required sum(target)

#include<iostream>
using namespace std;

int main(){
    int array1[5]={2,7,11,4,6};
    int target=10;
    int a,b;
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(array1[i]+array1[j]==target){
                a=i;
                b=j;
                break;
            }
        }
    }
    cout<<"["<<a<<","<<b<<"]";
}