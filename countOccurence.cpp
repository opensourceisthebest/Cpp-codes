#include<iostream>
using namespace std;
int first_Occ(int arr[],int n,int low,int high,int key ){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>key){
            return first_Occ(arr,n,low,mid-1,key);
        }
        else if(arr[mid]<key){
            return first_Occ(arr,n,mid+1,high,key);
        }
        else{
            if(mid==0 || arr[mid]!=arr[mid-1])
                return mid;
            else
                return first_Occ(arr,n,low,mid-1,key);
        }
    }
    return -1;
}
int last_Occ(int arr[],int n,int low,int high,int key){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>key)
            return last_Occ(arr,n,low,mid-1,key);
        else if(arr[mid]<key)
            return last_Occ(arr,n,mid+1,high,key);
        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1])
                return mid;
            else    
                return last_Occ(arr,n,mid+1,high,key);
        }
    }
    return -1;
}
int countOcc(int arr[],int n,int key){
    int first = first_Occ(arr,n,0,n-1,key);
    if(first==-1)
        return 0;
    else
        return (last_Occ(arr,n,0,n-1,key)-first+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    cout<<countOcc(arr,n,key);
    return 0;
}