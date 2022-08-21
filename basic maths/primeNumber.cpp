//check if a number is prime or not(using break)
#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0) return 0;     }
    return 1;
}

int main(){
    int number;
    cout<<"Enter the number : "<<endl;
    cin>>number;

    if(isPrime(number)) cout<<"number is prime"<<endl;   
    else cout<<"Not prime"<<endl;
    return 0;
}