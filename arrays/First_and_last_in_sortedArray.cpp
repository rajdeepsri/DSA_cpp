// for array {0,0,1,2,2,2} first occurence of 2 is at index 3 and last at index 5
/* #include<iostream>
using namespace std;

//Using Linear Search(bad approach cuz sorted array hai)
int firstOcc(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
            break;
        }
    }
    return -1;
}

int secondOcc(int arr[],int size,int key){
    for(int i=size-1;i>=0;i--){
        if(arr[i]==key){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int array1[6]={0,1,1,1,2,2};
    cout<<"first occurence"<<firstOcc(array1,6,1)<<endl;
    cout<<"second occurence"<<secondOcc(array1,6,1)<<endl;
    return 0;
}
*/

//Using Binary Search(since array will be pre-sorted)
#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int ans=-1;
    int start=0;
    int end=size-1;
    int mid= start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start +(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){
    int ans=-1;
    int start=0;
    int end=size-1;
    int mid= start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start +(end-start)/2;
    }
    return ans;
}

int main(){
    int even[6]={5,7,7,8,8,10};
    cout<<endl<<firstOcc(even,6,8)<<endl;
    cout<<lastOcc(even,6,8)<<endl;
    return 0;
}

//to find total number of occurences
//do (last - first + 1)