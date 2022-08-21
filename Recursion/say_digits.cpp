#include<iostream>
#include<string>
using namespace std;

// string sayDigits(int n){
//     string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int num=n;
//     string s="";
//     while(num!=0){
//         int digit = num%10;
//         s=s+arr[digit]+" ";
//         num/=10;
//     }
//     return s;
// }
//We will do this using Recursion

void sayDigits(int n,string *arr){
    //base case
    if(n==0) return;

    //processing
    int digit = n%10;
    n=n/10;
    //RR
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";

    

}

int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigits(n,arr);
    return 0;
}