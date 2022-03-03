#include <iostream>
#include <stack>
using namespace std;

bool parenthesis(const string& str)
{
    stack<char> stk;

    for(const char& c : str)
    {
        if(c == '(')
        {
            stk.push(c);
        }
        else if(c == ')')
        {
            if(stk.empty())
            {
                return false;
            }
            else
            {
                stk.pop();
            }
        }
    }

    return stk.empty();
}

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if(parenthesis(str))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}