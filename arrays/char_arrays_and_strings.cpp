#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){ //name[i]!='\0' mtlb null character tak
        count++;
    }
    return count;
}
void revString(char name[], int n){
    int i=0, j=n-1;
    while(i<j){
        swap(name[i++],name[j--]);
    }
}

int main(){
    char name[20];
    cin>>name; //agar input rajdeep shri but space/tab/enter k baad cin kaam nhi krega
    cout<<"ur name is "<<name<<endl;
    // cout<<"length = "<<getLength(name);
    int len = getLength(name);
    revString(name,len);
    cout<<"reverse = "<<name;
    return 0;
}