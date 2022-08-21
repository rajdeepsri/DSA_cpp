//input = "abbaca" output = "ca"
//first remove "bb", string ="aaca"
//now remove "aa", string ="ca"

#include<iostream>
#include<string>
using namespace std;

// string removeDuplicates(string s){
//use while loop 24 july
//     int n = s.length();
//     int start=0;
//     while(start<n){
//         if(s[start]==s[start+1]){
//             s.erase(start,1);
//             start=0;
//             continue;
//         }
//         start++;
//     }
//     return s;
// }
//Time limit exceeds
int main(){
    string s;
    cin>>s;
    // cout<<s[0]<<" "<<s[1];
    removeDuplicates(s);
    cout<<s;
    return 0;
}