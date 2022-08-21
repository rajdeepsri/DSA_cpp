#include<iostream>
using namespace std;

// bool isPalin(char name[], int n){
//     char ans[n];
//     for(int i=0; i<n; i++){
//         ans[i]=name[i];
//     }
//     int s=0,e=n-1;
//     while(s<e){
//         swap(ans[s++],ans[e--]);
//     }
//     for(int i=0; i<n; i++){
//         if(ans[i]!=name[i]) return false;
//     }
//     return true;
// }
//Taking extra space so try new approach

bool isPalin(char name[], int n){
//isme uppercase or lowercase ko alg-alg consider krega
    int s=0, e=n-1;
    while(s<e){
        if(name[s++]!=name[e--]) return false;
    }
    return true;
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[10]="abcba";
    int len = getLength(name);
    // cout<<len;
    if(isPalin(name,len)) cout<<"yes";
    else cout<<"no";
    return 0;
}

//leetcode's valid palindrome question mein
// step1. faltu characters ko hatana by using if(ch>'a'&&ch<'z'), capital and nums k liye bhi
//step2. lowercase m convert
//step3. check palindrome