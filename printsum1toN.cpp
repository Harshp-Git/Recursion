#include<iostream>
using namespace std;
int print1toN(int n){
    if(n==0) return 0;
    return print1toN(n-1)+n;
}

int main(){
    int n;
    cin>>n;
    cout<<print1toN(n);
    
    return 0;
}