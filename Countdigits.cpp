#include<iostream>
using namespace std;
int count(int n){
    int static c=0;
    if(n==0) {
        return c;
    }
    else{
        c++;
        
        
    }
    return count(n/10);

}

int main(){
    int n;
    cin>>n;
    cout<<count(n);    
    return 0;
}