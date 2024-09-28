#include<iostream>
using namespace std;
int isprime(int n){
    if(n==0||n==1) return false;
    if(n%2==0) return false;
    if(n/n==1) return true;
    return isprime(n/2);
    
}
int main(){
    int n;
    cin>>n;
    cout<<isprime(n);    
    return 0;
}