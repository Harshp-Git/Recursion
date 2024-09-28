#include<iostream>
using namespace std;
int occ(string s, char ch,int idx){
    if(idx==s.length()) return 0;
    return (s[idx]==ch)+occ(s,ch,idx+1);

}

int main(){
    string s="occurence";
    cout<<occ(s,'c',0);
    
    return 0;
}