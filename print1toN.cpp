#include<iostream>
using namespace std;
void print1toN(int n){
    if(n==0) return;
    else{
        print1toN(n-1);
        cout<<n;
    } 

}

int main(){
    int n;
    cin>>n;
    print1toN(n);
    
    return 0;
}