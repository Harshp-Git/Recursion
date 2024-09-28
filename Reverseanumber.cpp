#include<iostream>
using namespace std;
void reverse(int n){
    int static rem=0;
    int static rev=0;
    if(n==0) {
        cout<<rev;
        return;
    }
    else{
    rem=n%10;
    rev=rem+rev*10;
    reverse(n/10);
    }
    

}

int main(){
    int n;
    cin>>n;
    reverse(n);   
    return 0;
}