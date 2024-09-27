#include<iostream>
using namespace std;
int kthsymbol(int n, int k){
    if(n==1) return 0;
    if(k%2==0){
        int prevans= kthsymbol(n-1,k/2);
        if(prevans==0) return 1;
        else return 0;
    }
    else{
        int prevans= kthsymbol(n-1,k/2);
        return prevans;
    }
}


int main(){
    int n,k;
    cin>>n>>k;
    cout<<kthsymbol(n,k);
    return 0;
}