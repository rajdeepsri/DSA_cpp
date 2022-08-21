#include<iostream>
using namespace std;

int power_of_two(int n){
    if(n==0) return 1; //base case
    return 2*power_of_two(n-1); //recursive relation
}

int fact(int n){
    if(n==0 | n==1) return 1; //base case
    return n*fact(n-1); //recursive relation
}

void print_whole_num(int n){
    if(n==0){
        return;
        }
    cout<<n<<" ";
    print_whole_num(n-1);
}

int main(){
    int n;
    cin>>n;

    print_whole_num(n);
    // cout<<fact(n);
    // cout<<power_of_two(n)<<endl;
    return 0;
}