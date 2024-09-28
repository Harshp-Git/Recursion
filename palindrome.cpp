#include<iostream>
using namespace std;
int palindrome(string st,int i, int j){
    if(i>j) return true;
    if(st[i]!=st[j]) return false;
    return palindrome(st,i+1,j-1);

}

int main(){
    string st ="mam";
    cout<<palindrome(st,0,st.length());
    
    return 0;
}