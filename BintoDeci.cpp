#include<iostream>
using namespace std;
int bin(int n){
    if(n==1) return 1;
    else{
        return ((n%2)+10)*bin(n/2);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<bin(n-1);  
    return 0;
}
