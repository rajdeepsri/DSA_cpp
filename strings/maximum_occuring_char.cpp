#include<iostream>
#include<string>
using namespace std;

char getMax(string s){
    int arr[26]={0};
    
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1, ans = -1;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return ans + 'a';
}

int main(){
    string s;
    cin>>s;
    cout<<getMax(s);
    return 0;
}