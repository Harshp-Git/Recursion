#include<iostream>
using namespace std;
void SumArray(int arr[],int ar[],int n,int idx,int *result){

    if(idx==n) {
        return;
    }

    result[idx]=(arr[idx]+ar[idx]);
    SumArray(arr,ar,n,idx+1,result);
}
void printarr(int result[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<result[i]<<",";
    }
}

int main(){
    int idx =0;
    int arr[]={1,2,3,4,5};
    int ar[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result[n];
    SumArray(arr,ar,n,idx,result);
    printarr(result,n);
    
    
    
    return 0;
}