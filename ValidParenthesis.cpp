#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> stack;
    unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char c : s)
    {
        if (mapping.find(c) == mapping.end())
        {
            stack.push(c);
        }
        else if (!stack.empty() && mapping[c] == stack.top())
        {
            stack.pop();
        }
        else
        {
            return false;
        }
    }

    return stack.empty();
}

int main()
{
    cout << "Enter a string to check if it's valid: ";
    string s;
    cin >> s;

    if (isValid(s))
    {
        cout << "The string is valid." << endl;
    }
    else
    {
        cout << "The string is not valid." << endl;
    }

    return 0;
}