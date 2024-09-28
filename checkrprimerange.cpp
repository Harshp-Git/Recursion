#include<iostream>
using namespace std;
int isprime(int n ,int st, int en){
    if(st>=en||st==1) return 0;
    else if(n%st==0){   
        return false;
    }
    else{
        return true;
    }
    return isprime(n,(st+1)<en,en);;
}

int main(){
    int n,st,en;
    cin>>n>>st>>en;
    cout<<isprime(n,st,en);
    
    return 0;
}