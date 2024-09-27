#include<iostream>
using namespace std;
int Arraysum(int arr[],int n){
    if(n==0) return 0;
    return Arraysum(arr+1,n-1)+arr[0];
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Arraysum(arr,n);
    return 0;
}