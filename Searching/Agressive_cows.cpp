//N stalls, K num of cows, to prevent fight, assign cows to stall
//minimum distance between any two of them is large as psbl --- indicates Binary Search
//return largest minimum distance
//arr[] = {4,2,1,3,6} k=2(cows) n=5(stalls) ans=5

#include<iostream>
using namespace std;

bool isPossible(int stalls[],int size, int k, int mid){
    int cow=1;
    int pos=stalls[0];
    for(int i=0;i<size;i++){
        if((stalls[i]-pos)>=mid){
            cow++;
            if(cow==k) return true;
            pos=stalls[i];
        }
    }
    return false; 
}

int main(){
    int stalls[5]={4,2,1,3,6};
    int k=2;
    int n=5;
    //first sort the array
    int s=0;
    int maxi = -1;
    for(int i=0;i<n;i++){
        maxi = max(maxi,stalls[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1; //cuz we gotta find largest solution
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
    return 0;
}