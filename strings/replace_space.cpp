//input -> my name is
//output -> my@40name@40is

// #include<iostream>
// #include<string>
// using namespace std;

// string replaceSpaces(string &str){
//     string s="";
//     for(int i=0; i<str.length(); i++){
//         if(str[i]==' '){
//             s.push_back('@');
//             s.push_back('4');
//             s.push_back('0');
//         }
//         else{
//             s.push_back(str[i]);
//         }
//     }
//     return s;
// }
// int main(){
//     string s;
//     getline(cin,s);
//     cout<<"before replacing : "<<s<<endl;
//     cout<<"after replacing : "<<replaceSpaces(s);;
//     return 0;
// }

//without using extra space
#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    getline(cin,name);
    cout<<"before : "<<name<<endl;
    for(int i=0; i<name.length(); i++){
        if(name[i]==' '){
            name.replace(i, 1, "@40");
        }
    }
    cout<<"After : "<<name<<endl;
    return 0;
}