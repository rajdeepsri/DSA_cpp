#include<iostream>
using namespace std;

bool isPalin(char a[], int len){
    int s=0, e=len-1;
    while(s<e){
        if(a[s]!=a[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++) count++;
    return count;
}
int main(){
    char name[10];
    cin>>name;
    int len=getLength(name);
    if(isPalin(name,len)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}