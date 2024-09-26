#include<iostream>
using namespace std;
int reversestr(string & str,int s, int e){
    if(s>=e) return;    
    swap(str[s],str[e]);
    return reversestr(str,s++,e--);
}
int main(){
    
    string str="abcd";
    cout<<reversestr(str,0,str.length()-1);
    return 0;
}