//arr[i] represents no. of pages in ith book. there are m students and task is to allocate
//all books to their students such that
//each student get at least one book
//each book allocated to a student
//book allocated in contiguos manner
//allocate such that max no of pages assigned to a student is minimum

#include<iostream>
using namespace std;

int isPossible(int arr[],int n, int m, int mid){ //check if
    int studentCount = 1; //starting with student 1
    int pageSum = 0; //start with 0 pagesum

    for(int i=0;i<n;i++){
        if(pageSum + arr[i] <= mid) pageSum += arr[i]; //if mid se chota h toh add krte jao arr[i] and store
        else{ //warna, move to next student with the arr[i] jo phle liya tha
            studentCount++;
            if(studentCount>m || arr[i]>mid) return false; //number of student condition
            pageSum=0; 
            pageSum=arr[i]; //store the last arr[i] that was failed in if condition
        }
    }
    return true;
}


int main(){
    int arr[4]={10,20,30,40}; //initialised array
    int n = 4, m=2; //n, m = number of books and students
    int s=0, sum=0;
    for(int i=0;i<n;i++) sum += arr[i]; //defines searchSpace
    int e=sum,ans = -1,mid=s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){ //if yes, then end ko peeche and store ans
            ans=mid; 
            e=mid-1;
        }
        else{ //if no, then or bade value pr milega
            s=mid+1;
        }
       mid=s+(e-s)/2; //increment mid
    }
    cout<<ans;
    return 0;
}