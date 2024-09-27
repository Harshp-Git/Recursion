#include<iostream>
using namespace std;
int printmax(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],printmax(arr,n,idx+1));


}
void printmax2(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    printmax2(arr,n,idx+1,max);
}
int main(){
    int arr[] = {56,25,3,45,98,57,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<printmax(arr,n,0);
    printmax2(arr,n,0,0);
    return 0;
}