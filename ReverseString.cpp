#include <iostream>
using namespace std;
string reversestr(string s, int n)
{
    int static st;
    if (st >= n)
    {
        return s;
    }
    swap(s[st], s[n]);
    st++;
    return reversestr(s, n - 1);
    
}
int main()
{

    string str = "abcd";
    cout << reversestr(str, str.length() - 1);
    return 0;
}