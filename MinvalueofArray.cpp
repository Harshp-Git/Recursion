#include<iostream>
using namespace std;
int printmin(int arr[],int n,int idx){
    if(idx==n) return INT_MAX;
    return min(arr[idx],printmin(arr,n,idx+1));
}
void printmin2(int arr[],int n,int idx,int min){
    if(idx==n){
        cout<<min;
        return;
    }
    if(min>arr[idx]) min=arr[idx];
    printmin2(arr,n,idx+1,min);
}
int main(){
    int arr[] = {56,25,3,45,98,57,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<printmin(arr,n,0);
    printmin2(arr,n,0,INT_MAX);
    return 0;
}