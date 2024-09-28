#include<iostream>
using namespace std;
int arrsorted(int arr[], int n){
    if(n==0||n==1) return true;
    return arr[n-1]>=arr[n-2]&& arrsorted(arr,n-1);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,8,9}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<arrsorted(arr,n); 
    return 0;
}