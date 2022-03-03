#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> stk;

    for(int i = 0; i < n; i++)
    {
        string op;
        cin >> op;

        if(op == "push")
        {
            int e;
            cin >> e;

            stk.push(e);
        }
        else if(op == "pop")
        {
            if(stk.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << stk.top() << endl;
                stk.pop();
            }
        }
        else if(op == "size")
        {
            cout << stk.size() << endl;
        }
        else if(op == "empty")
        {
            cout << stk.empty() << endl;
        }
        else if(op == "top")
        {
            if(stk.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << stk.top() << endl;
            }
        }
    }

    return 0;
}