#include<iostream>
using namespace std;

void upper_to_lower(char name[], int len){
    for(int i=0; i<len; i++){
        if(name[i]<='z' && name[i]>='a'){
            continue;
        }
        else{
            name[i] = name[i]-'A'+'a';
        }
    }
}
int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){ //name[i]!='\0' mtlb null character tak
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    cout<<"before : "<<name<<endl;
    int len = getLength(name);
    upper_to_lower(name,len);
    cout<<"after : "<<name<<endl;
    return 0;
}